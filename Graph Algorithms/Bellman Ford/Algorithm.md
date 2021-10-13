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