# Dijkstra is a Greedy algorithm
# The code finds the shortest distances from the source to all vertices.
# The function dijkstra() calculates the shortest path.
# The mindistance() function constructs the shortest path starting from the target using predecessors.


# Dijkstra Algotithm

1) Mark all vertex as unvisited vertex.

2) Mark source vertex as 0 and all other vertices as infinity.

3) Consider source vertex as current vertex.

4) Calculate the path length of all the neighboring vertex from the current vertex by adding the weight of the edge in the     current vertex

5) If the new path length is smaller than the previous path length then replace it otherwise ignore it.

6) Mark the current vertex as visited after visiting the neighbor vertex of the current vertex

7) Select the vertex with the smallest path length as the new current vertex and go back to step 4.

8) Repeat this process until all the vertex are marked as visited

    
# psudo code for Dijkstra algo/ Shortest distance 
 
    Declare the visited list
    Declare the unvisited list
    For each node in graph:
         Add node to the unvisited list with distance of infinity and previous node of null
    Set the start node's distance to 0 in the unvisited list

    While the unvisited list is not empty:
        Set current node to the node with the lowest cost from the unvisited list
        Copy cost and previous values for current node from the unvisited list to the visited list
        Remove the current node from the unvisited list
        
        For each neighbour of current node:
            If neighbour is not in the visited list
                Calculate new cost = weight of edge + cost of current node
                If new cost is less than neighbour's cost in unvisited list
                    Update the neighbour's cost to become the new cost
                    Update the neighbour's previous node to become the current node

    Return the visited list
 