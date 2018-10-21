# 图数据模型

## 2 基本概念

**有向图**：节点集合 N 及 N 上的二元关系 A

u->v

v: 头部，后继

u: 尾部，前导

**路径**：(v~1~, v~2~, ..., v~k~)

长度：k-1

## 3 图的实现

### 3.1 邻接表

```
list->struct cell
	node nodename
	list next
list successers[MAX]
```

### 3.2 邻接矩阵

`bool arcs[MAX][MAX]`

## 4 无向图的连通分支

**连通图**：由单个连通分支组成的图

### 4.1 作为等价类的连通分支

连通分支是等价关系 P 上的等价类

### 4.2 计算连通分支的算法

依据：G~0~ 是 G 中没有边的节点

归纳：对第 i+1 条边 {u, v}

1. u->v 在 G~i~ 的同一分支中：G~i+1~=G~i~
2. u->v 在 G~i~ 的不同分支中：G~i+1~ = 合并 G~i~ 包含 u, v 的分支

### 4.3 用于形成分支的数据结构

```
edgelist->struct edge
	node node1, node2
	edgelist next
tree->struct treenode
	int height
	tree parent
tree nodes[MAX]
```

```
find(a, nodes)
	x=nodes[a]
	while x.parent!=null
		x=x.parent
	return x
```

```
merge(x, y)
	if x.height>y.height
		higher=x
		lower=y
	else
		higher=y
		lower=x
	lower.parent=higher
	if lower.height=higher.height
		higher.height++
```

### 4.4 连通分支算法的运行时间

find: O\(log _n_ )

main: O\(mlog _n_)

m: 边、节点数中较大者

## 5 最小生成树

生成树

1. 连通节点
2. 无简单环路的无向图

最小生成树：边标号和最小

### 5.1 找到最小生成树

1. 按照边标号的递增次序考虑边
2. 如果边的两个端点在不同分支，合并

### 5.2 克鲁斯卡尔算法起效的原因

T：最小生成树

K：算法结果

E = {e~1~, e~2~, ..., e~m~}

e~i~ 在 T 不在 K 中

​	T 形成环路

e~i~ 在 K 不在 T 中

​	设 e~i~ 连接 u, v，存在路径 Q

​	a) e~i~ 有最高标号：e~i~ 不在 K 中

​	b) e~i~ 不是最高标号：T 不是最小生成树

### 5.3 克鲁斯卡尔算法的运行时间

O\(mlog _n_)

## 6 深度优先搜索

```
dfs(u, g)
	g[u].mark=unvisited
	p=g[u].successors
	while p!=null
		v=p.nodename
		if g[v].mark=unvisited
			dfs(v, g)
		p=p.next
```

### 6.1 构建深度优先搜索树

### 6.2 深度优先搜索树弧的分类

1. 树向弧：dfs(v) 被 dfs(u) 调用的 u->v
2. 前向弧：v 是 u 的真子孙但不是子节点的 u->v
3. 后向弧：v 是 u 的祖先或 u=v 的 u->v
4. 横向弧：v 既不是 u 的祖先也不是其子孙的 u->v

### 6.3 深度优先搜索森林

```
dfsForst(g)
	for u in [0, MAX)
		g[u].mark=unvisited
	for u in [0, MAX)
		if g[u].mark=unvisited
			dfs(u, g)
```

### 6.4 深度优先搜索的运行时间

O(m)

### 6.5 有向图的后序遍历

```
global k
dfs(u, g)
	g[u].mark=visited
	p=g[u].successors
	while p!=null
		v=p.nodename
		if g[v].mark=unvisited
			dfs(v, g)
		p=p.next
	++k
	g[u].postorder=k
dfsForest(g)
	k=0
	g[all].mark=unvisited
	for u in [0, MAX)
		if g[u].mark=unvisited
			dfs(u, g)
```

### 6.6 后序编号的特殊属性

树向弧，前向弧，横向弧 u->v, v 先于 u

后向弧且 u!=v，v 后于 u

## 7 深度优先搜索的一些用途

### 7.1 有向图中环路的寻找

存在后向弧<=>存在环路

```
testAcyclic(g)
	dfsForest(g)
	for u in [0, MAX)
		p=g[u].successors
		while p!=null
			v=p.nodename
			if g[u].postorder<=g[v].postorder
				return false
			p=p.next
	return true
```

### 7.2 无环测试的运行时间

O(m)

### 7.3 拓扑排序

拓扑次序：每条弧的尾部都先于头部

### 7.4 可达性问题

**可达集**：从节点 u 沿有向图中的弧可到达的节点集

### 7.5 可达性测试的运行时间

O(m)

### 7.6 通过深度优先搜索寻找连通分支

可达性问题：计算 R 的自反传递闭包 R\*

## 8 用于寻找最短路径的 Dijkstra 算法

1. 未解决的节点中 dist(v) 最小
2. 标记 v 为已解决，更新全部未解决节点 dist

### 8.1 起效原因

前提：弧的标号非负

a) any u belongs to {solved}, dist(u) 最小，路径由 {solved} 组成

b) any u belongs to { unsolved }, dist(u) 最小或为 infinity

### 8.2 数据结构

```
graph
	dist
	successors
	topot
list->cell
	nodename
	nodelabel
	next
pot->node[MAX]
```

### 8.3 辅助函数

```
swap(a, b, g, p)
	p[a]<->p[b]
	g[p[a]].topot=a
	g[p[b]].topot=b
priority(a, g, p)
	return g[p[a]].dist
bubbleUp(a, g, p)
	if a>1 and priority(a, g, p)<priority(a/2, g, p)
		swap(a, a/2, g, p)
		bubbleUp(a/2, g, p)
bubbleDown(a, g, p, last)
	child=2*a
	if child<last and priority(child+1, g, p)<priority(child, g, p)
		child++
	if child<=last and priority(a, g, p)>priority(child, g, p)
		swap(a, child, g, p)
		bubbleDown(child, g, p, last)
```

### 8.4 初始化

```
initialize(g, p, plast)
	for i in [0, MAX)
		g[i].dist=infinity
		g[i].topot=i+1
		p[i+1]=i
	g[0].dist=0
	plast=MAX
```

### 8.5 实现

```
dijkstra(g, p, plast)
	initialize(g, p, plast)
	while plast>1
		v=p[i]
		swap(1, plast, g, p)
		--plast
		bubbleDown(1, g, p, plast)
		ps=g[v].successors
		while ps!=null
			u=ps.nodename
			if g[u].dist>g[v].dist+ps.nodelabel
				g[u].dist=g[v].dist+ps.nodelabel
				bubbleUp(g[u].topot, g, p)
			ps=ps.next
```

### 8.6 运行时间

O(mlog _n_)

## 9 最短路径的佛洛伊德算法

```
for v in [0, MAX)
	for w in [0, MAX)
		dist[v][w]=arc[v][w]
for u in [0, MAX)
	for v in [0, MAX)
		if dist[v][u]+dist[u][w]<dist[v][w]
			dist[v][w]=dist[v][u]+dist[u][w]
```

沃夏尔算法（判断是否存在路径）

```
if (!dist[v][w])
	dist[v][w] = dist[v][u] && dist[u][w]
```

## 10 图论简介

### 10.1 完全图

K~n~: 每一对不同的节点之间都存在边的无向图

### 10.2 平面图

两种最简单的非平面图：K~5~, K~3,3~

### 10.4 着色图

由边相连的两个节点不会被指定为相同的颜色

X(K~n~)=n

### 10.6 团

G 中满足每对节点之间都存在边的所有节点组成的集合