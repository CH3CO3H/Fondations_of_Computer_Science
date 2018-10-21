# 关系数据模型

## 2 关系.

### 2.1 关系的表示

### 2.2 数据库

数据库：关系的集合

### 2.3 数据库的查询

## 3 键

## 4 关系的主要存储结构

## 5 辅助索引结构

```
TREE->struct NODE*
	char Name[30]
	TUPLELIST toTuple
	TREE lc, rc
```

## 6 关系间的导航

## 7 关系代数

关系使集合，可使用集合运算

### 7.3 选择运算符

$\sigma_C(R)$

C 是条件，R 是关系操作数

### 7.4 投影运算符

$\pi_{B_1,...,B_n}(R)$

关系 R 到属性 B~1~, ..., B~n~ 上的投影

### 7.5 关系的联接

//TODO replace it by right math exp

D(A~i~, B~j~, R, S)

{A~1~, ..., A~n~, B~1~, ..., B~j-1~, B~j+1~, ..., B~m~}

### 7.6 自然联接

//TODO replace it by right math exp

$R\Pi S$

### 7.7 关系代数表达式的表达式树

//TODO add graph

$\pi_{D, T}(\sigma_{C=TA}(CR\Pi CDH))$

```sql
SELECT Day, Hour
FROM CR, CDH
WHERE CR.Course=CDH.Course AND Room="Turing Aud."
```

## 8 关系代数运算的实现

### 8.4 联接的实现

嵌套循环：

```
for r in R do
	for s in S do
		if rB=sB, then
			print {A, B, C}
```

### 8.5 联接方法的比较

嵌套循环：O(rs)

排序：O(m+(r+s)log(r+s))

m: 联接中的元组数 in [0, rs]

## 9 关系代数法则

### 9.2 联接的法则

联接是否可交换取决于关系中次序是否重要

$(R\Pi_{A=B}S)\Pi_{C=D}T=R\Pi_{A=B}(S\Pi_{C=D}T)$

### 9.3 选择的法则

选择下压：

选择分割：

选择交换：

### 9.4 投影法则

