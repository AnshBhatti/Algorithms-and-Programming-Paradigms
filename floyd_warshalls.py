import numpy as np
print("Floyd-Warshall Algorithm")
x=int(input("Number of vertices: "))
y=int(input("Number of edges: "))
adj_matrix=np.full((x,x),100000,dtype=int)
for a in range(y):
    z=list(map(int,input().split()))
    adj_matrix[z[0]][z[1]]=z[2]
    adj_matrix[z[0]][z[0]]=0
    adj_matrix[z[1]][z[1]]=0
    #if the graph is undirected, then uncomment the line below
    #adj_matrix[z[1]][z[0]]=z[2]
print(adj_matrix)
for k in range(x): 
    for i in range(x):
        for j in range(x):
            adj_matrix[i][j]=min(adj_matrix[i][j],adj_matrix[i][k]+adj_matrix[k][j])
#adj_matrix now contains the shortest path for each pair
