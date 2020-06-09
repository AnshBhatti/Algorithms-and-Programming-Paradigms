x=input()
st=input()
a=0
occ=0
while a<=len(x)-len(st):
    #print(a)
    f=True
    for c in range(len(st)):
        if st[c]!=x[a+c]:
            b=c
            f=False
            break
    if f:
        b=len(st)
        occ+=1
    s=x[a:a+b]
    e=0
    for d in range(1,len(s)):
        if s[:d]==s[-d:]:
            e=d
    b-=e
    b=max(1,b)
    a+=b
print(occ)
