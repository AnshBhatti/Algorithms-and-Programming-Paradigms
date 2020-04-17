from heapq import *
print("Dijkstra's Algorithm")
x=int(input("Number of vertices: "))
y=int(input("Number of edges: "))
print("Edges:")
adj_list={}
for a in range(y):
    z=input().split()
    if z[0] not in adj_list:
        adj_list[z[0]]=[[int(z[2]),z[1]]]
    else:
        adj_list[z[0]].append([int(z[2]),z[1]])
    if z[1] not in adj_list:
        adj_list[z[1]]=[[int(z[2]),z[0]]]
    else:
        adj_list[z[1]].append([int(z[2]),z[0]])
v=input("Source vertex: ")
p_queue=[]
visited=[v]
connected={}
d={v:0}
while len(visited)!=x:
    v=visited[-1]
    connected[v]=True
    for each in adj_list[v]:
        heappush(p_queue,(each[0]+d[v],v,each[1]))
    pop=heappop(p_queue)
    while pop[1] in connected and pop[2] in connected:
        pop=heappop(p_queue)
    connected[pop[1]]=True
    connected[pop[2]]=True
    visited.append(pop[2])
    d[pop[2]]=pop[0]
print("Tree is complete. Here is the list of vertices and their respective distances from the source.")
print(d)
