# 迭代、归纳和递归

1. 迭代技术
2. 递归程序设计
3. 归纳证明
4. 程序正确性证明
5. 归纳定义
6. 运行时间分析

## 1. 本章主要内容

## 2. 迭代

### 1. 排序

### 2. 选择排序

```
selectSort(A[], n)
	for i=1 to n-1
		small=i
		for j=i+1 to n
			if A[j]<A[small]
				small=j
		swap(A[i], A[small]
	end
```

## 3. 归纳证明

数学归纳法

1. 依据情况
2. 归纳步骤

### 1. 归纳证明为何有效

- 归纳步骤的迭代
- 最小反例

### 3. 检错码

**定理：**如果 C 是长度为 n 的位串的检错集合，那么 C 最多含 2^n-1^ 个位串

## 4. 完全归纳

## 5. 证明程序的属性

### 1. 循环不变式

### 2. while 循环的循环不变式

## 6. 递归定义

1. 一条或多条依据规则
2. 一条或多条归纳规则

### 1. 表达式

### 2. 平衡圆括号

可以出现在表达式中的圆括号串

1. 左圆括号和右圆括号数量相等
2. 量变不为负

## 7. 递归函数

```
recSS(A[], i, n)
	if i<n-1
		small=i
		for j=i+1, j<n, j++
			if A[j]<A[small]
				small=j
		swap(A[i], A[small])
		recSS(A, i+1, n)
```

## 8. 归并排序

### 1. 合并

```
merge(list1, list2)
	if list==NULL
		return list2
	else if list2==NULL
		return list1
	else if (list->element)<=(list2->element)
		list1->next=merge(list1->next, list2)
		return list1
	else
		list2->next=merge(list1, list2->next)
		return list2
```

### 2. 分割表

```
split(list)
	if list=NULL
		return NULL
	else if list->next==NULL
		return NULL
	else
		pSecondCell=list->next
		list->next=pSecondCell->next
		pSecondCell->next=split(pSecondCell->next)
		return pSecondCell
```

### 3. 排序算法

```
mergeSort(list)
	if list==NULL
		return NULL
	else if list->next==NULL
		return list
	else
		secondList=split(list)
		return merge(mergeSort(list), mergeSort(secondList))
```

### 4. 完整的程序

## 9. 证明递归程序的属性

定义参数大小的方式

1. 某个参数的值
2. 某个参数指向的表的长度
3. 参数构成的某些函数

