/**
 * @brief priyanshi2808
 * find the shortest paths from the source to all vertices in the given graph.
 *  vector<pair<int,int>adj[] push{node , weight }
 *  Time Complexity : O ( V^2 ) ,with  min-priority queue : O ( V + E l o g V ) 
 *  
 */

vector<int> dijkstra(vector < pair<int, int> adj[], int src)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, 1e6); // n is the no of edges from 1 to n+1
    pq.push({0, src})             // distance 0 for node src to stc
        while (!pq.empty())
    {
        int currNode = pq.top().second;
        int currDist = pq.top().first;
        pq.pop();
        for (pair<int, int> edge : adj[currNode])
        {
            if (edge.second + currDist < dist[edge.first])
            {
                dist[edge.first] = currDist + edge.second;
                pq.push({dist[edge.first], edge.first});
            }
        }
    }
    return dist;
}
