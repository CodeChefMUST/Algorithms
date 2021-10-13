/*
 	* author: adityawithdoublea
 	* Problem statement: Given a weighted, directed and connected graph of V vertices and E edges, we have to find the shortest distance of all the vertex's from the source vertex S.
 	
*/

	/* 
    *   adj: vector of vectors which represents the graph
    *   S: source vertex
    */
    vector<int> BellmanFord(int V, vector<vector<int>> adj, int S) {
        
        //initialize distance of all vertices as infinite.
        vector<int> dis(V);
        for (int i = 0; i < V; i++)
            dis[i] = 1e8;
     
        //initialize distance of source as 0
        dis[S] = 0;
     
        //relax all edges |V| - 1 times
        //a simple shortest path from src to any other vertex can have at-most |V| - 1 edges
        for (int i = 0; i < V - 1; i++) {
     
            for (int j = 0; j < adj.size(); j++) {
                if (dis[adj[j][0]] != 1e8 && dis[adj[j][0]] + adj[j][2] <
                                   dis[adj[j][1]])
                    dis[adj[j][1]] = 
                      dis[adj[j][0]] + adj[j][2];
            }
        }
        
        return dis;
    }


/*
	* Time Complexity : O(V*E); where V = number of vertices, E = number of edges
 	* Space Complexity : O(V)
	* Sample Input : 			 0
						   (3)/    \(1)
							/		\
						   1 ------ 2 (Source)
						   	  (-1)

						V = 3, E = 3
						weight between edges = 3, 1, -1
						S = 2
	* Sample Output : For nodes 2 to 0, we can follow the path 2-0. This has a distance of 1. 
					  For nodes 2 to 1, we cam follow the path 2-0-1, which has a distance of 1+5 = 6
					  So, our output will be: 1 6 0
*/