<<<<<<< bellman_ford
## Bellman Ford alforithm
It is a algorithm to find out the shortest distance between nords.
It uses Dynamic programming stategies. It also works on negitive 

# Step By Step Procedure

1) Start with a weighted graph

2) Choose a strating vertex and assign infinity paths to all other vertices

3) Visit each path and relax the path distance  if they are inaccurate 

4) Now we have to do this V times because in the worst case, A vertex's path length might need to be readjested V times

5) Notice how the vertex at the top right corner had its path lenght adjusted.



# psudocode
    function bellmanFord(G, S)
    for each vertex V in G
        distance[V] <- infinite
        previous[V] <- NULL
    distance[S] <- 0

    for each vertex V in G				
        for each edge (U,V) in G
        tempDistance <- distance[U] + edge_weight(U, V)
        if tempDistance < distance[V]
            distance[V] <- tempDistance
            previous[V] <- U

    for each edge (U,V) in G
        If distance[U] + edge_weight(U, V) < distance[V}
        Error: Negative Cycle Exists

    return distance[], previous[]




# drawbacks of Bellman ford
If the total weight of a cycle is negitive then graph cannot be solved
=======
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

**Best Case Complexity :**  O(E)
**Average Case Complexity :**  O(VE)
**Worst Case Complexity :**  O(VE)

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
>>>>>>> main
