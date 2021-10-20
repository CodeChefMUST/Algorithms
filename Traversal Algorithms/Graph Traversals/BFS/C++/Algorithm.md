Breadth First Search (BFS)

  Breadth first search is a graph traversal algorithm that starts traversing the graph from root node and explores all the neighbouring nodes. Then, it selects the nearest node and explore all the unexplored nodes. The algorithm follows the same process for each of the nearest node until it finds the goal.
  
  In the various levels of the data, you can mark any node as the starting or initial node to begin traversing. The BFS will visit the node and mark it as visited and places it in the queue.
Now the BFS will visit the nearest and un-visited nodes and marks them. These values are also added to the queue. The queue works on the FIFO model.
In a similar manner, the remaining nearest and un-visited nodes on the graph are analyzed marked and added to the queue. These items are deleted from the queue as receive and printed as the result.
  
  
  Algorithm
  
  Step 1: Start by putting any one of the graph's vertices at the back of a queue.
  
  Step 2: Take the front item of the queue and add it to the visited list.
  
  Step 3: Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the back of the queue.
  
  Step 4: Keep repeating steps 2 and 3 until the queue is empty.
  
  Step 5: Print all the elements from the visited list. 
  
  Step 6: Exit.
  
  
  
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
