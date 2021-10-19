// Directed Graph

#include <iostream>
#include <list>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>

class Graph {
   private:
    class Node {
       public:
        std::string label;
        Node(const std::string& label) : label(label) {}
    };

    // use map for fast lookup
    std::unordered_map<std::string, Node*> nodes;

    // list of lists of adjacent node
    // eg. Node A = [B,C,D] where, B,C,D are adjacent to A
    std::unordered_map<Node*, std::list<Node*>> adjacencyList;

   public:
    void addNode(const std::string&);
    void addEdge(const std::string&, const std::string&);

    // Breadth First Traversal
    void breadthFirstTraversal(const std::string&);
};

void Graph::addNode(const std::string& label) {
    Node* new_node = new Node(label);
    nodes.emplace(label, new_node);
}

void Graph::addEdge(const std::string& from, const std::string& to) {
    if (nodes.find(from) == nodes.end())
        throw std::runtime_error("Error: " + from + " node not found");
    if (nodes.find(to) == nodes.end())
        throw std::runtime_error("Error: " + to + " node not found");

    // add "to node" to "from node" list as its adjacent node
    adjacencyList[nodes[from]].push_back(nodes[to]);
}

void Graph::breadthFirstTraversal(const std::string& root) {
    // validate the root node
    if (nodes.find(root) == nodes.end())
        throw std::runtime_error("Error: " + root + " node not found");

    // set of visited nodes
    std::set<Node*> visited;

    // create a queue frontier and push root node
    std::queue<Node*> frontier;
    frontier.push(nodes[root]);

    while (!frontier.empty()) {
        // pop one node from the front of the queue
        Node* current = frontier.front();
        frontier.pop();

        // continue if the current node is already visited
        if (visited.find(current) != visited.end())
            continue;

        // visit the current node and add it to the set of visited node
        std::cout << current->label << std::endl;
        visited.insert(current);

        // push all of current's unvisited neighbour into the queue
        for (auto&& neighbour : adjacencyList[current]) {
            if (visited.find(neighbour) == visited.end())
                frontier.push(neighbour);
        }
    }
}

/*
    To add a node  : graph.addNode("A");
    To add an edge : graph.addEdge("A", "B");

    Sample input graph:

        ┌──A──┐
        │     │
        B  ┌──C──┐
           │     │
        ┌──D──┐  E
        │     │
        F     G

    Sample Output:
        A
        B
        C
        D
        E
        F
        G

*/
