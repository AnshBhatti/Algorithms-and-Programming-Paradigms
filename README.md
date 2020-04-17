# Algorithms-and-Programming-Paradigms
This repository is planned to contain implementations/examples for the following algorithms, programming paradigms, and data structures:
1) Greedy algorithms
2) Bottom-up and top-down dynamic programming
3) Minimum-cost Spanning Tree using Prim's and Kruskal's algorithms
4) SSSP (Single Source Shortest Path) using Dijkstra's algorithm
5) Minimum-cost Hamiltonian circuit (Ex: Traveling Salesman Problem) using sorted edges and nearest neighbor algorithms
6) Segment Tree (for Range Minimum/Maximum Queries (RMQs) in a list)
7) Fenwick Tree (for Range Sum Queries (RSQs) in a list)
7) Depth First Search
8) Breadth First Search
9) Traveling Salesman Problem (TSP) using Nearest Neighbor and Sorted Edges algorithms

Note: As of now this repository contains an implementation of bottom-up dp. Will continue to add more as time goes on
Implementations described below

TabularDP.cpp
- Implements bottom-up DP for the Wedding Shopping problem taken from UVa Online Judge 11450

topdown.cpp
- Implements top-down DP for the Wedding Shopping problem taken from UVa Online Judge 11450

Segment_Tree.cpp
- Purpose: Range Minimum Query (RMQ), this program creates a segment tree (a heap of indexes with the minimum indexes). The user first needs to put the number of items in his/her array. Then he/she will put the contents of array, receiving the 2D array representation of the binary segment tree as output. Benefit: Performs RMQ in O(log n) time.

TSP.cpp
- Implements nearest neighbor algorithm on a graph to solve the Traveling Salesman Problem (create a minimum-cost Hamiltonian graph)

DFS.cpp
- Shows an example of the Depth First Search algorithm for graph traversal

BFS.cpp
- Shows an example of the Breadth First Search algorithm for graph traversal and SSSP on unweighted graphs

fenwicktree.py
- Implementation of a Fenwick tree, which helps perform sum queries within 2 indicies i and j in log2 n time

prims.py
- Implementation of Prim's algorithm, which makes a Minimum Spanning Tree on a weighted graph

kruskals.py
- Implementation of Kruskal's algorith, which makes a Minimum Spanning Tree on a weighted graph
