/**
 * @file TopologicalSort.cpp
 * @author Priyanshi Dixit 
 * @brief 
 * @version 0.1
 * @date 2021-10-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * note :- 
 * there are no unique topological sort for a graph
 * can be used for cycle detection 
 * Valid for acyclic directed graphs
 * Here we have used Kahn's Algorithm  
 * 
*/
// adj represents the graph , indegree is for each node and n is the no of nodes

vector<int> kahns(vector<int> &adj[], vector<int> &indegree, int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> res;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        res.push_back(curr);
        for (auto i : adj[curr])
        {
            indegree[i]--;
            if (indegree[i] == 0)
                q.psuh(i);
        }
    }
    return res;
}