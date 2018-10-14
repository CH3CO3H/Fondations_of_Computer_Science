# 树

## 3. 树的数据结构

### 3.2 树的最左子节点右兄弟节点表示

```
seek(let, n)
	c=n.left
	while c!=null
		if c.letter=let
			break
		else
			c=c.left
	return c
```

## 6. 二叉树

### 6.3 对二叉树的递归

{
	action A~0~
	对左子树的递归调用
	action A~1~
	对右子树的递归调用
	action A~2~
}

## 7. 二叉查找树

### 7.2 查找

```
lookup(x, t)
	if t=null
		return false
	else if x=t.element
		return true
	else if x<element
		return lookup(x, x.left)
	else
		return lookup(x, x.right)
```

### 7.3 插入

```
insert(x, t)
	if t=null
		t.element=x
		t.left=null
		t.right=null
	else if x<t.element
		t.left=insert(x, t.left)
	else if x>t.element
		t.right=insert(x, t.right)
	return t
```

### 7.4 删除

```
deletemin(pt)
	if pt.left=null
		min=pt.element
		pt=pt.right
		return min
	else
		return deletemin(pt.left)

delete(x, pt)
	if pt=null
		return
	if x<pt.element
		delete(x, pt.left)
	else if x>pt.element
		delete(x, pt.right)
	else
		if pt.left=null
			pt=pt.right
		else if pt.right=null
			pt=pt.left
		else
			pt.element=deletemin(pt.right)
```

## 8. 二叉查找树的操作效率

### 8.1 最快情况

O\(k)

### 8.2 最佳情况

O\(_log_ k)

### 8.3 一般情况

O\(_log_ k)

## 9. 优先级队列和偏序树

### 9.3 优先级队列操作在堆上的执行

```
bubbleUp(A[], i)
	if i>1 and A[i]>A[i/2]
		swap(A, i, i/2)
		bubbleUp(A, i/2)
```

```
insert(A[], x, pn)
	pn++
	A[pn]=x
	bubbleUp(A, pn)

bubbleDown(A[], i, n)
	child=2*i
	if child<n and A[child+1]>A[child]
		child++
	if child<=n and A[i]<A[child]
		swap(A, i, child)
		bubbleDown(A, child, n)

deletemax(A[], pn)
	swap(A, 1, pn)
	pn--
	bubbleDown(A, 1, pn)
```

### 9.4 优先级队列操作的运行时间

