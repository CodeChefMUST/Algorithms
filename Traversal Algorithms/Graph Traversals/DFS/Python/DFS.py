'''
These implementations, recursive and interative have a time
complexity of O(V + E), being V the quantity of vertices
and E the quantity of edges. The space complexity if O(V).

Author: LiuSeeker
'''

# Node and Graph classes
class GraphNode:
    def __init__(self, value=None):
        self.value = value
        self.adjacent = []

class Graph:
    # This Graph class build a bidirectional graph from a dict
    # Exemple at 'run_test()' function
    def __init__(self, adjacency: dict):
        self.nodes = [None] * len(adjacency)
        for node_value in adjacency.keys():
            if self.nodes[node_value] is None:
                self.nodes[node_value] = GraphNode(node_value)
            for adj in adjacency[node_value]:
                if self.nodes[adj] is None:
                    self.nodes[adj] = GraphNode(adj)
                self.nodes[node_value].adjacent.append(self.nodes[adj])

def recursive_depth_first_search(node: GraphNode, target_value, visited=None) -> None:
    '''
    This function check if this node has the target value.
    If True, return this node. If False, call this function
    for each adjacent node, if not already visited. If one
    recursive call returns a node, return the returned node;
    otherwise return None.
    '''
    if visited is None:
        visited = set()
    visited.add(node)

    return_node = None

    if node.value == target_value:
        return_node = node
    else:
        for adj in node.adjacent:
            if adj not in visited:
                ret = recursive_depth_first_search(adj, target_value, visited)
                if ret is not None:
                    return_node = ret
                    break


    return return_node

def iterative_depth_first_search(node: GraphNode, target_value) -> None:
    '''
    This function uses a stack to check the value of the
    nodes, starting with the root node. If the node on top
    of the stack has the target value, return the node.
    Otherwise, remove the node from the stack and push the
    adjacent nodes to the stack. Repeat until find the
    targe value or empty the stack.
    '''
    visited = set()
    stack = []
    stack.append(node)
    visited.add(node)

    while stack:
        actual_node = stack.pop()
        if actual_node.value == target_value:
            return actual_node
        for adj in actual_node.adjacent:
            if adj not in visited:
                visited.add(adj)
                stack.append(adj)
    
    return None

def run_test():
    # Test input
    graph_dict = {0: [1, 2, 4],
                  1: [3, 5],
                  2: [0, 6],
                  3: [1],
                  4: [0, 5],
                  5: [1, 4],
                  6: [2]}
    
    test_graph = Graph(graph_dict)

    # Check if graph is correct
    new_dict = {}
    for n in test_graph.nodes:
        new_dict[n.value] = [x.value for x in n.adjacent]
    if new_dict != graph_dict:
        print("Error creating graph")

    # Recursive DFS test
    # Expected output: n if n is a node value in the graph, otherwise None
    # WARNING: Hardcoded
    for n in range(8):
        r = recursive_depth_first_search(test_graph.nodes[0], n)
        if n < 7:
            if n != r.value:
                print(f"Error at recursive DFS test {n}. Excepcted {n}, got {r.value}")
        else:
            if r is not None:
                print(f"Error at recursive DFS test {n}. Excepcted None, got {r.value}")
    
    # Iterative DFS test
    # Expected output: n if n is a node value in the graph, otherwise None
    # WARNING: Hardcoded
    for n in range(8):
        r = iterative_depth_first_search(test_graph.nodes[0], n)
        if n < 7:
            if n != r.value:
                print(f"Error at iterative DFS test {n}. Excepcted {n}, got {r.value}")
        else:
            if r is not None:
                print(f"Error at iterative DFS test {n}. Excepcted None, got {r.value}")
