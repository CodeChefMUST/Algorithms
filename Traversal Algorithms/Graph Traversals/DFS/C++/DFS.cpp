/**
 * @file DFS.cpp
 * @author Priyanshi Dixit 
 * @brief 
 *      dfs traversal in a graph :
 *          input 1:
 *              1--> 2--|
 *              ^    |  |
 *              |   \/  |
 *              |    3  |
 *              0<------|
 *          output : starting from node 1: 1 , 2 , 3, 0
 * 
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/* node is referd to the current node we are processing 
    adj represents the graphical relationship of nodes
    vis takes the record of node that are visited at any time of traversal 

*/

void dfsUtil(int node, vector<int> &adj[], vector<bool> &vis, vector<int> &ans)
{
    vis[node] = true;
    ans.push_back(node);
    for (auto i : adj[node])
    {
        if (vis[i] == false)
            dfsUtil(i);
    }
}
vector<int> dfs(int startingNode, vector<int> &adj[])
{
    vector<int> vis(n + 1, false) // n is the no of nodes
        vector<int>
            ans;
    dfsUtil(startingNode, adj, vis, ans);
    return ans;
}