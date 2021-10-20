import java.util.*;
import java.lang.*;
import java.io.*;

class Graph
{
    class Edge
    {
        int src, dest, weight;
        Edge()
        {
            src = dest = weight = 0;
        }
    };
 
    int V, E; //V: vertices, E: edges
    Edge edge[];
 
    Graph(int v, int e)
    {
        V = v;
        E = e;
        edge = new Edge[e];
        for (int i=0; i<e; ++i)
            edge[i] = new Edge();
    }
    void BellmanFord(Graph graph,int src)
    {
        int V = graph.V, E = graph.E;
        int dist[] = new int[V];
 
        // Step 1: Initialize distances from src to all other
        // vertices as INFINITY
        for(int i=0; i<V; ++i)
            dist[i] = Integer.MAX_VALUE;
        dist[src] = 0;
 
        // Step 2: Iterate through the edges |V| - 1 times. A simple
        // shortest path from src to any other vertex can
        // have at most |V| - 1 edges
        for(int i=1; i<V; i++)
        {
            for(int j=0; j<E; j++)
            {
                int u = graph.edge[j].src;
                int v = graph.edge[j].dest;
                int weight = graph.edge[j].weight;
                if (dist[u]!=Integer.MAX_VALUE &&
                    dist[u]+weight<dist[v])
                    dist[v]=dist[u]+weight;
            }
        }
 
        // Step 3: check for negative-weight cycles.  The above
        // step guarantees shortest distances if graph doesn't
        // contain negative weight cycle. If we get a shorter
        //  path, then there is a cycle.
        for(int j=0; j<E; ++j)
        {
            int u = graph.edge[j].src;
            int v = graph.edge[j].dest;
            int weight = graph.edge[j].weight;
            if (dist[u]!=Integer.MAX_VALUE && dist[u]+weight<dist[v])
              System.out.println("Graph contains negative weight cycle");
        }
        printArr(dist, V);
    }
 
    // A function used to print the solution
    // void printArr(int dist[], int V)
    // {
    //     System.out.println("Vertex   Distance from Source");
    //     for (int i=0; i<V; ++i)
    //         System.out.println(i+"\t\t"+dist[i]);
    // }
 
    // // Driver method to test above function
    // public static void main(String[] args)
    // {
    //     int V = 5;  // Number of vertices in graph
    //     int E = 8;  // Number of edges in graph
 
    //     Graph graph = new Graph(V, E);
 
    //     graph.edge[0].src = 0;
    //     graph.edge[0].dest = 1;
    //     graph.edge[0].weight = -1;
 
    //     graph.edge[1].src = 0;
    //     graph.edge[1].dest = 2;
    //     graph.edge[1].weight = 4;
 
    //     graph.edge[2].src = 1;
    //     graph.edge[2].dest = 2;
    //     graph.edge[2].weight = 3;
 
    //     graph.edge[3].src = 1;
    //     graph.edge[3].dest = 3;
    //     graph.edge[3].weight = 2;
 
    //     graph.edge[4].src = 1;
    //     graph.edge[4].dest = 4;
    //     graph.edge[4].weight = 2;
 
    //     graph.edge[5].src = 3;
    //     graph.edge[5].dest = 2;
    //     graph.edge[5].weight = 5;
 
    //     graph.edge[6].src = 3;
    //     graph.edge[6].dest = 1;
    //     graph.edge[6].weight = 1;
 
    //     graph.edge[7].src = 4;
    //     graph.edge[7].dest = 3;
    //     graph.edge[7].weight = -3;
 
    //     graph.BellmanFord(graph, 0);
    // }
}

/*
O/P:

Vertex   Distance from Source
0		    0
1		    -1
2		    2
3		    -2
4		    1
*/


/* Time Complexities:
 * Best Case: O(E)
 * Average Case: O(VE)
 * Worst Case: O(VE)
 
 * Space Complexity: O(V) 
 */