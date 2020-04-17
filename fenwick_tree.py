def rsq(tree,i): 
    s=0
    i+=1
    while i > 0:
        s+=tree[i]
        i-=i&(-i) 
    return s
def update(tree,n,i,v):
    i+=1
    while i <= n:
        tree[i]+=v
        i+=i&(-i)
def construct(arr,n): 
    tree=[0]*(n+1) 
    for i in range(n): 
        update(tree,n,i,arr[i])
    return tree
