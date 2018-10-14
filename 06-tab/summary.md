# 表数据模型

## 2. 基本术语

### 2.2 表的部分

- 表头
- 尾部
- 字表
- 子序列：从表中剔除 0 个或多个元素形成的表
- 前缀
- 后缀

## 3. 对表的操作

- insert
- lookup
- delete
- push
- pop
- connect
- first
- retrieve
- length
- isEmpty

## 4. 链表

### 4.2 查找

```
lookup(x, l)
	if l=null
		return false
	else if x=l.ele
		return true
	else
		return lookup(x, l.next)
```

### 4.3 删除

```
delete(x, pl)
	if pl=null
		return
	if x=pl.exe
		pl=pl.next
	else
		delete(x, pl.next
```

### 4.4 插入

```
insert(x, pl)
	if pl==null
		pl.ele=x
		pl.next=null
	else if x!=pl.ele
		insert(x, pl.next)
```

### 4.5 带重复的 idl

### 4.6 排序表

```
lookup(x, l)
	if l=null
		return false
	if x>l.ele
		return lookup(x, l->next)
	if x=l.ele
		return true
	return false
```

### 4.8 双向链表

```
delete(p, pl)
	if p.next!=null
		p.next.previous=p.previous
	if p.previous=null
		pl=p.next
	else
		p.previous.next=p.next
```

## 5. 数组

