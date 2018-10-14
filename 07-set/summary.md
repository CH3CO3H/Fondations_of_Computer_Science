# 7 集合数据模型

## 2 基本定义

### 2.1 原子

空集不是原子

### 2.2 通过抽象对集合的定义



## 3 集合的运算

### 3.3 并集、交集和差集的代数法则

### 3.8 集合的幂集

P\(S) 或 2^S^

## 4 集合的链表实现

## 5 特征向量

## 6 散列

## 7 关系和函数

### 7.1 笛卡尔积

### 7.2 两个以上集合的笛卡尔积

### 7.3 二元关系

### 7.5 表示二元关系的图

### 7.6 函数

偏函数：可能对其定义域中的某些元素无定义

### 7.7 一一对应

定义域 A，值域 B，函数F

1. $\forall a \in A, \exists b \in B \space s.t. \space F(a)=b$
2. $\forall b \in B, \exists a \in A \space s.t. F(a)=b$
3. $!\exists b \in B, \space s.t. \space \exists a1, a2 \in A, F(a1)=F(a2)=b$

1, 2: 满射；3:单射；1，2，3:双射

## 8 将函数作为数据实现

### 8.1 对函数的操作

- 插入
- 删除
- 查找

### 8.2 函数的链表表示

```
LIST->struct CELL
	DTYPE domain
	RTYPE range
	LIST next
```

```
insert(d, r, p)
	if p=null
		p.domain=d
		p.range=r
		p.next=null
	else if p.domain=d
		p.range=r
	else
		insert(d, r, p.next)
```

### 8.4 函数的散列表表示

```
list->
	variety
	harvested
	next
```

```
lookupB(a, l)
	if l=null
		reutrn 0
	if a=l.variety
		return l.harvested
	else
		return lookupB(a, l.next)

lookup(a, H)
	return lookupB(a, H[h(a)])
```

### 8.6 函数操作效率

- list: O\(n)
- vector: O\(1)
- hashtable: O\(n/B)

## 9 二元关系实现

### 9.1 对二元关系的操作

查找（多种定义），插入，删除

### 链表实现

```
RLIST->struct RCELL
	PVARIETY variety
		pollinizer
	RLIST next

PLIST->struct PCELL
	pollinizer
	next
```

```
lookup(a, l)
	if l=null
		return null
	else if l.variety=a
		p.pollinizer=l.pollinizer
		p.next=lookup(a, l.next)
		return p
	else
		return lookup(a, l.next)
```

### 9.3 特征向量法

`PLIST Pollinizer[5]`

### 9.4 散列表

### 9.5 运行时间

|          | 查找             | 插入  | 删除  |
| -------- | ---------------- | ----- | ----- |
| 链表     | O\(n)            | O\(n) | O\(n) |
| 特征向量 | O\(1)            | O\(m) | O\(m) |
| 散列表   | O\(max\(m, n/B)) |       |       |

m: 定义域值的平均函数值数量

## 10 二元关系的一些特殊属性

传递性，自反性，对称性与反对称性

偏序：传递，反对称

全序：每个定义域元素对都是可比的

等价：自反，对称，传递

等价类：

1. 每个定义域元素刚好在一个等价类中；
2. 如果 aRb，那么 a 和 b 在相同的等价类中
3. 如果 aRb 不成立，a 和 b 在不同的等价类中

## 11 无限集

### 11.1 定义

指自身与其至少一个真子集之间存在一一对应的集合