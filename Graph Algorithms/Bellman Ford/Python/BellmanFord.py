"""
 author : Poonam-Mishra
 Problem statement : Compute the shortest paths from a single source vertex to all other vertices in a weighted directed Graph
 Caution : Bellman ford algorithm does not works for graph with negative weight cycles
"""
import sys
infinity = sys.maxsize
class Graph:
    def __init__(self,numVertices):
        self.numVert = numVertices
        self.graph = []
    def setEdge(self,start,end,weight):
        self.graph.append((start,end,weight))
    def BellmanFord(self,start):
        distance = [infinity]*self.numVert
        distance[start]=0

        # Relax edges
        for i in range(self.numVert-1):
            for s,e,w in self.graph:
                if distance[s] != infinity and distance[s] + w < distance[e]:
                    distance[e]=distance[s]+w

        # Check for negative weight cycle - Drawback of Bellman ford algorithm
        for s,e,w in self.graph:
            if distance[s] != infinity and distance[s] + w < distance[e]:
                print ("The directed weighted graph contains negative weight cycle")
                return

        # Print distance of each vertex from source vertex
        for i in range(self.numVert):
            print("%d - %d" % (i, distance[i]))

#Sample Input
g = Graph(7)
g.setEdge(0,1,6)
g.setEdge(0,2,5)
g.setEdge(0,3,5)
g.setEdge(3,5,-1)
g.setEdge(5,6,3)
g.setEdge(4,6,3)
g.setEdge(3,2,-2)
g.setEdge(2,4,1)
g.setEdge(2,1,-2)
g.setEdge(1,4,-1)
g.BellmanFord(0)

#Sample Output
"""
0 - 0
1 - 1
2 - 3
3 - 5
4 - 0
5 - 4
6 - 3
"""

#Time Complexity
"""
|E| = no. of edges
|V| = no. of vertices

Best case TC :
    TC = O(|E|*|V|-1) = O(n^2) [where n = number of vertices = number of edges]
Worst case TC when the Graph is a complete graph
    then |E| = n(n-1)/2
    TC =  O((n(n-1)/2)*(n-1)) = O(n^3)
"""


#Space Complexity
"""
The Space complexity for the above algorithm is O(n) , where n is the number of vertices
"""