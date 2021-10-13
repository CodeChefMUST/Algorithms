/*
Dijkstra's Algorithm is an algo used to compute distances of nodes from a single source in an undirected graph.
Hence, this is part of the SSSP (Single Source Shortest Path) algorithms.
In this, we will see how Dijkstra's is imlpemented for Adjacency Matrix representation of graphs
 */

import java.io.*;
import java.util.*;

public class Dijkstra {
    public static int[] Dijkstra_Matrix(int[][] graph, int source, int nodes){
        // This approach has a time complexity of O(V^2), where V is the number of nodes
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
        Scanner read = new Scanner(System.in);

        int n = read.nextInt(); //This is the number of nodes in the graph
        int e = read.nextInt(); //This is the number of edges in the graph

        int src = read.nextInt(); // This is the source node

        // In graphs, we have 2 types of representations; Adjacency list and Adjacency Matrix
        // Hence, there will be two different functions.

        // Adjacency matrix (1 based indexing)
        int[][] graph1 = new int[n+1][n+1];

        for (int i = 0; i < e; i++) {
            int a = read.nextInt(); // First node of an edge
            int b = read.nextInt(); // Second node of an edge
            int weight = read.nextInt(); // weight of the edge, 1 in case nothing is given
            graph1[b][a] = weight; // These statements are required as Dijkstra works for undirected graphs ONLY
            graph1[a][b] = weight;
        }
        int[] min_path = Dijkstra_Matrix(graph1,src,n);

        for (int i = 0; i < n; i++) {
            System.out.println("Distance from node " +  (i+1) + " " + min_path[i]);
        }
    }
}


/*
Code contributed by Akshat Wadhwa (github.com/akshat19231)
 */