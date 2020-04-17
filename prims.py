from heapq import *
x=int(input("Number of vertices: "))
y=int(input("Number of edges: "))
print("Input your edges in each line as vertex 1, vertex 2, weight")
adj_list={}
for a in range(0,y):
    z=input().split()
    if z[0] in adj_list:
        adj_list[z[0]].append([int(z[2]),z[1]])
    else:
        adj_list[z[0]]=[[int(z[2]),z[1]]]
    if z[1] in adj_list:
        adj_list[z[1]].append([int(z[2]),z[0]])
    else:
        adj_list[z[1]]=[[int(z[2]),z[0]]]
v=input("Vertex to start with: ")
connected={}
visited=[v]
p_queue=[]
mst_weight=0
f=True
while len(visited)!=x:
    v=visited[-1]
    adj_list[v]=sorted(adj_list[v])
    b=0
    while b<len(adj_list[v]):
        heappush(p_queue,(adj_list[v][b][0],v,adj_list[v][b][1]))
        b+=1
    connected[v]=True
    pop=heappop(p_queue)
    while pop[1] in connected and pop[2] in connected:
        pop=heappop(p_queue)
    visited.append(pop[2])
    connected[pop[2]]=True
    mst_weight+=pop[0]
    print(pop)
print(mst_weight)
