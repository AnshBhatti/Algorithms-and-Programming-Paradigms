from heapq import *
class Graph():
    def __init__(self,edges):
        self.adj_list={}
        self.edge_list=[]
        self.adj_matrix=[[0 for e in range(edges)] for a in range(edges)]
    def add(self,v,v1,w):
        self.adj_list[v]=self.adj_list.get(v,[])+=[[v1,w]]
        self.adj_list[v1]=self.adj_list.get(v1,[])+=[[v,w]]
        self.adj_matrix[v]=v1
        self.adj_matrix[v1]=v
        heappush(self.edge_list,[w,v,v1])
        heappush(self.edge_list,[w,v1,v])

