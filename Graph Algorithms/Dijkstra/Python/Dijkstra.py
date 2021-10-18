# Python program for Dijkstra's single
# source shortest path algorithm. The program is
# for adjacency matrix representation of the graph

# Library for INT_MAX

import sys

class Graph():

	def __init__(self, vertices):
		self.V = vertices
		self.graph = [[0 for column in range(vertices)]
					for row in range(vertices)]

	def printSolution(self, dist):
		print ("Vertex \tDistance from Source")
		for node in range(self.V):
			print(node, "\t", dist[node])

	# A utility function to find the vertex with
	# minimum distance value, from the set of vertices
	# not yet included in shortest path tree

	def minDistance(self, dist, sptSet):

		# Initialize minimum distance for next node
		min = sys.maxint

		# Search not nearest vertex not in the
		# shortest path tree
		for u in range(self.V):
			if dist[u] < min and sptSet[u] == False:
				min = dist[u]
				min_index = u

		return min_index

	# Function that implements Dijkstra's single source
	# shortest path algorithm for a graph represented
	# using adjacency matrix representation
	def dijkstra(self, src):

		dist = [sys.maxint] * self.V
		dist[src] = 0
		shortest_path = [False] * self.V

		for cout in range(self.V):

			# Pick the minimum distance vertex from
			# the set of vertices not yet processed.
			# x is always equal to src in first iteration
			x = self.minDistance(dist, shortest_path)

			# Put the minimum distance vertex in the
			# shortest path tree
			shortest_path[x] = True

			# Update dist value of the adjacent vertices
			# of the picked vertex only if the current
			# distance is greater than new distance and
			# the vertex in not in the shortest path tree
			for y in range(self.V):
				if self.graph[x][y] > 0 and shortest_path[y] == False and \
				dist[y] > dist[x] + self.graph[x][y]:
						dist[y] = dist[x] + self.graph[x][y]

		self.printSolution(dist)
        

"""
Sample Input

g = Graph(9)              # defines no of vertices
    
    #sample graph
    [0, 4, 0, 0, 0, 0, 0, 8, 0],  
	[4, 0, 8, 0, 0, 0, 0, 11, 0],
	[0, 8, 0, 7, 0, 4, 0, 0, 2],
	[0, 0, 7, 0, 9, 14, 0, 0, 0],
	[0, 0, 0, 9, 0, 10, 0, 0, 0],
	[0, 0, 4, 14, 10, 0, 2, 0, 0],    
	[0, 0, 0, 0, 0, 2, 0, 1, 6],
	[8, 11, 0, 0, 0, 0, 1, 0, 7],
	[0, 0, 2, 0, 0, 0, 6, 7, 0]
		

"""


#Time Complexity of the algorithm : O(V^2), 
# here V is the number of nodes
#Space Complexity of the algorithm : O(V^2),
#  as we are making a 2D array to store the distances of every node from every node

"""
O/P

Vertex   Distance from Source
0                0
1                4
2                12
3                19
4                21
5                11
6                9
7                8
8                14
"""
