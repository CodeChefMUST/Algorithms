# Graph Depth-first search (DFS)

## Definition
```
"Depth-first search (DFS) is an algorithm for traversing
or searching tree or graph data structures. The algorithm
starts at the root node (selecting some arbitrary node as
the root node in the case of a graph) and explores as far
as possible along each branch before backtracking."

https://en.wikipedia.org/wiki/Depth-first_search
```

## Steps
1. Start a stack with starting node (root node)
2. Check if node at top of the stack (actual node) has been visited before. If true, remove the node from the stack.
3. Otherwise, check if actual node has target value. If true, return actual node.
4. If false, push all adjacent nodes of actual node into the stack.
5. Repeat step 2 until find the desired node at step 3 or exhaust the stack

## Example

![Simple DFS](https://upload.wikimedia.org/wikipedia/commons/7/7f/Depth-First-Search.gif)

This first example shows the DFS in a ~~tree~~ uni-direcional graph.

![Complex DFS](https://codeforces.com/predownloaded/8d/be/8dbe5d89e58b67f3d8e4d8e0e8eb3358ba921b28.png)

This second example shows the DFS in a (actual) bidirectional graph. The white circles are the not visited nodes, the gray circles are the visited node and the red circle is the actual node.