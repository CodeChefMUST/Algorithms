/*
Dijkstra's Algorithm is an algo used to compute distances of nodes from a single source in an undirected graph.
Hence, this is part of the SSSP (Single Source Shortest Path) algorithms.
In this, we will see how Dijkstra's is implemented for Adjacency Matrix representation of graphs.

Time Complexity of the algorithm : O(V^2), here V is the number of nodes
Space Complexity of the algorithm : O(V^2), as we are making a 2D array to store the distances of every node from every node

 */

import java.io.*;
import java.util.*;

public class Dijkstra {
    public static int[] Dijkstra_Matrix(int[][] graph, int source, int nodes){

        int[] distances = new int[nodes + 1];
        Boolean[] visited = new Boolean[nodes + 1];

        for (int i = 1; i <= nodes; i++) {
            distances[i] = Integer.MAX_VALUE;
            visited[i] = false;
        }
        distances[source] = 0;
        for (int i = 0; i < nodes - 1; i++) {

            int min_value = Integer.MAX_VALUE;
            int min_index = -1;

            for (int j = 1; j <= nodes; j++) {
                if(!visited[j] && distances[j]<=min_value){
                    min_value = distances[j];
                    min_index = j;
                }
            }
            visited[min_index] = true;
            for (int j = 1; j <= nodes ; j++) {
                if(!visited[j] && graph[min_index][j] != 0){
                    if(distances[min_index] + graph[min_index][j] < distances[j]){
                        distances[j] = distances[min_index] + graph[min_index][j];
                    }
                }
            }
        }
        int[] ans = new int[nodes];
        for (int i = 0; i < nodes; i++) {
            ans[i] = distances[i+1];
        }
        return ans;
    }
    public static void main(String[] args) {

        // The graph is 1 based indexed, hence has a row and column of 0s in the begnning.

        int[][] graph1 = {{0,0,0,0,0,0,0,0,0,0},
                { 0,0, 4, 0, 0, 0, 0, 0, 8, 0 },
                {0, 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                {0, 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                { 0,0, 0, 7, 0, 9, 14, 0, 0, 0 },
                { 0,0, 0, 0, 9, 0, 10, 0, 0, 0 },
                { 0,0, 0, 4, 14, 10, 0, 2, 0, 0 },
                { 0,0, 0, 0, 0, 0, 2, 0, 1, 6 },
                { 0,8, 11, 0, 0, 0, 0, 1, 0, 7 },
                { 0,0, 0, 2, 0, 0, 0, 6, 7, 0 } };

        // Source node
        int src = 1;
        // Total number of nodes
        int n = 9;

        // Array of distances of nodes from the source
        int[] min_path = Dijkstra_Matrix(graph1,src,n);


        for (int i = 0; i < n; i++) {
            System.out.println("Distance from node " +  (i+1) + " " + min_path[i]);
        }
        
        /*
        Currently, this code will be running on sample IO provided above!
         */

    }
}


/*
Code contributed by Akshat Wadhwa (github.com/akshat19231)
 */