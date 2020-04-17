print("Longest Increasing Subsequence (LIS)")
print("You provide a sequence as an input, and the length of the longest non-decreasing subsequence is printed")
print("Example input:\nNumber of terms in sequence: 6\nSequence: 1 2 0 4 3 6")
print("Example output:\n4")
x=int(input("Number of terms in sequence: "))
seq=list(map(int,input("Sequence: ").split()))
l=[1 for each in seq]
for a in range(1,x):
    s=0
    for b in range(a,-1,-1):
        if seq[b]<seq[a]:
            s=max(s,l[b]+1)
    l[a]=s
print(max(l))
