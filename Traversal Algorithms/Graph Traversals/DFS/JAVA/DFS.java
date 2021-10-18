import java.util.*;

class DFS {
    private static int V; // No. of vertices
  
    // Array  of lists for 
    // Adjacency List Representation
    private static LinkedList<Integer> adj[];
  
    // Constructor
    DFS(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }
  
    // Function to add an edge into the graph
    void addEdge(int v, int w)
    {
        adj[v].add(w); // Add w to v's list.
    }
  
    // A function used by DFS
    public static void DFSUtil(int v, boolean visited[])
    {
        // Mark the current node as visited and print it
        visited[v] = true;
        System.out.print(v + " ");
  
        // Recur for all the vertices adjacent to this
        // vertex
        Iterator<Integer> i = adj[v].listIterator();
        while (i.hasNext()) 
        {
            int n = i.next();
            if (!visited[n])
                DFSUtil(n, visited);
        }
    }

    public static void DFS(int v)
    {
        boolean visited[] = new boolean[V];    // Mark all the vertices as not visited
  
        DFSUtil(v, visited);    // Call the recursive helper function to print DFS traversal
    }

}

/*
    * Sample Input: (0,1) (0,2) (1,2) (2,0) (2,3) (3,3)
    * Sample Output: 2 0 1 3
    * Time Complexity in Best Case: O(V+E)
	* Time Complexity in Average Case: O(V+E)
	* Time Complexity in Worst Case: O(V+E)
	* Space Complexity in Worst Case: O(V) 
*/ 