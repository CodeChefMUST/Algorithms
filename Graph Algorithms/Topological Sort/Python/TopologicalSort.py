# Takes graph in the form of adjacency list in input, and gives sorted list as output
def topological_sort(graph: defaultdict(list)):
	v = len(graph)  # getting the number of vertices
	sorted = []
	indegrees = [0] * v  # array that stores the indegrees of each node
	zero_incoming = []  # queue that stores all the nodes that have no incoming edges
	for node in graph:
		for neighbour in graph[node]:
			indegree[neighbour] += 1  # populating the indegree array with indegrees
	for node in range(v):
		if indegrees[node] == 0:
			zero_incoming.append(i)  # adding nodes with zero indegree to queue
	visited_nodes = 0  # to check the number of nodes visited
	while zero_incoming:  # while the queue has nodes with 0 indegrees
		node = zero_incoming.pop(0)
		sorted.append(node)  # add node to topological order
		for neighbour in graph[node]:
			indegrees[neighbour] -= 1  # removing the outgoing edges
			if indegrees[neighbour] == 0:
				zero_incoming.append(neighbour)  # adding new nodes with 0 indegree to queue
		visited_nodes += 1
	
	assert visited_nodes == v, "The graph is cyclic!"  # if graph is cyclic, raise error
	return sorted