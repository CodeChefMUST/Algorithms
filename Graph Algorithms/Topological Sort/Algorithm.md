## Abstract
Topological Sorting or Kahn's algorithm is an algorithm that orders a directed acylic graph in a way such that each node appears before all the nodes it points to in the returned order, i.e. if we have a -->  b, a must appear before b in the topological order.
It's main usage is to detect cycles in directed graphs, since no topological order is possible for a graph that contains a cycle. Some of it's uses are: deadlock detection in OS, Course schedule problem etc.

Here's the algorithm step by step:
1. Find a vertex that has indegree = 0 (no incoming edges)
2. Remove all the edges from that vertex that go outward (make it's outdegree = 0, remove outgoing edges)
3. Add that vertex to the array representing topological sorting of the graph
4. Repeat till there are no more vertices left.

## Pseudocode:
```
sorted <-- Empty list initially, of the topologically sorted elements
zero_incoming <-- set of nodes with indegree = 0

while zero_incoming is not empty do:
	remove a node n from zero_incoming
	add n to the sorted list
	for each node out with an edge from n to out do:
		remove edge from graph
		if out has no other incoming edges then:
			insert out in zero_incoming

if graph has edges then:
	return Error  {graph has at least 1 cycle}
else
	return sorted {our final array}
```