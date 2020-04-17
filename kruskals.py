x=int(input("Number of vertices: "))
y=int(input("Number of edges: "))
print("Input your edges. Each line will have weight, edge 1, and edge 2")
edge_list=[]
for a in range(0,y):
    z=input().split()
    z[0]=int(z[0])
    edge_list.append(z)
edge_list=sorted(edge_list)
final_list=[]
connected={}
mst_weight=0
for edge in edge_list:
    if edge[1] not in connected or edge[2] not in connected or connected[edge[1]]!=connected[edge[2]]:
        final_list.append(edge)
        if edge[1] in connected:
            connected[edge[2]]=connected[edge[1]]
        elif edge[2] in connected:
            connected[edge[1]]=connected[edge[2]]
        else:
            connected[edge[1]]=edge[1]
            connected[edge[2]]=edge[1]
        mst_weight+=edge[0]
        if len(final_list)==x-1:
            break
#print(final_list)
print(mst_weight)
