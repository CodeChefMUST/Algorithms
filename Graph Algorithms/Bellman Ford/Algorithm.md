# Bellman Ford algorithm 
It helps us find the shortest path from a vertex to all other vertices of a weighted graph.
It is very similar to the Dijkstra Algorithm. However, unlike the Dijkstra Algorithm, the Bellman-Ford algorithm can work on graphs with negative-weighted edges. This capability makes the Bellman-Ford algorithm a popular choice.

## Step by Step Algorithm

- Start with the weighted graph.
- Choose a starting vertex and assign infinity path values to all other vertices.
- Visit each edge and relax the path distances if they are inaccurate.
- We need to do this V times because in the worst case, a vertex's path length might need to be readjusted V times.
- Notice how the vertex at the top right corner had its path length adjusted.
- After all the vertices have their path lengths, we check if a negative cycle is present.


## Time Complexity

**Best Case Complexity :**     O(E)
**Average Case Complexity :**  O(VE)
**Worst Case Complexity :**    O(VE)

## Space Complexity  
O(V)

## INPUT
V = 5
E = 10
S = 0

Edge1: Source, Destination, Weight
0,1,6

Edge2: Source, Destination, Weight
0,2,7

Edge3: Source, Destination, Weight
1,2,8

Edge4: Source, Destination, Weight
1,4,-4

Edge5: Source, Destination, Weight
1,3,5

Edge6: Source, Destination, Weight
3,1,-2

Edge7: Source, Destination, Weight
2,3,-3

Edge8: Source, Destination, Weight
2,4,9

Edge9: Source, Destination, Weight
4,0,2

Edge10: Source, Destination, Weight
4,3,7

##OUTPUT

Vertex Distance from Source Distance
0  0 
1  2 
2  7
3  4 
4  -2

>>>>>>>