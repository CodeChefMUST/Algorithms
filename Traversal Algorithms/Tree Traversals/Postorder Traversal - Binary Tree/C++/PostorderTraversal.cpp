/*
Sample Input::
Input Tree 1:
   1
  / \
 6   5
    /
   2
output 1: [6, 2, 5, 1]
Input Tree 2:
      1
     / \
    2   3
   / \
  4   5

Output 2: [4, 5, 2, 3, 1]
*/

/** Binary Tree Defination :
  struct Node {
      int data;
      Node *left;
      Node *right;
     Node(int x) : val(x), left(NULL), right(NULL) {}
  };
*/


// Recursive code
void recurinordertraversal(Node *a, vector<int> &ans)
{
    if (a == NULL)
        return;
    recurinordertraversal(a->left, ans);
    recurinordertraversal(a->right, ans);
    ans.push_back(a->data);
}
vector<int> InorderTraversal(Node *a)
{
    vector<int> ans;
    recurinordertraversal(a, ans);
    return ans;
}

// Iterative code
vector<int> iterpostordertraversal(Node *a)
{
    stack<Node *> s;
    s.push(a);
    vector<int> ans;

    while(!s.empty)
    {
        Node * curr=s.top();
        s.pop();

        ans.push_back(curr->data);

        if(curr->left)
            s.push(curr->left);

        if(curr->right)
            s.push(curr->right);
    }
    reverse(ans.begin(),ans.end());

    return ans;

}

//Time complexity : O(n)
