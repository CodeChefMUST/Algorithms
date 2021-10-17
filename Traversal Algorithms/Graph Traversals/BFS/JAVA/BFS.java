import java.util.*;

public class BFS{

    private static int V;   // No. of vertices
    private static LinkedList<Integer> adj[]; //Adjacency Lists
 
    // Constructor
    BFS(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i){
            adj[i] = new LinkedList();
        }
    }

    // Function to add an edge into the graph
    void addEdge(int v,int w)
    {
        adj[v].add(w);
    }
 
    // prints BFS traversal from a given source s
    public static void BFS(int s)
    {
        boolean visited[] = new boolean[V]; // Mark all the vertices as not visited
        
        LinkedList<Integer> queue = new LinkedList<Integer>();  
 
        visited[s]=true;    // Mark the current node as visited and enqueue it
        queue.add(s);
 
        while (queue.size() != 0)
        {
            s = queue.poll();
            System.out.print(s+" ");    // Dequeue a vertex from queue and print it
                       
            Iterator<Integer> i = adj[s].listIterator();  // Get all adjacent vertices of the dequeued vertex s
            while (i.hasNext())
            {
                int n = i.next();
                if (!visited[n])
                {
                    visited[n] = true;  // If a adjacent has not been visited, then mark it visited and enqueue it
                    queue.add(n);
                }
            }
        }
    }

}

/*
    * Sample Input: (0,1) (0,2) (1,2) (2,0) (2,3) (3,3)
    * Sample Output: 2 0 3 1
    * Time Complexity in Best Case: O(V+E)
	* Time Complexity in Average Case: O(V+E)
	* Time Complexity in Worst Case: O(V+E)
	* Space Complexity in Worst Case: O(V) 
*/