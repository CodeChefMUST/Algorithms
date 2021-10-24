'''
These implementations, recursive and interative have a time
complexity of O(V + E), being V the quantity of vertices
and E the quantity of edges. The space complexity if O(V).

Author: LiuSeeker
'''

# Node class
class GraphNode:
    def __init__(self, value=None):
        self.value = value
        self.adjacent = []


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
