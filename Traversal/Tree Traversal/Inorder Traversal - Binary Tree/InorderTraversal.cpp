/**
 * @brief priyanshi2808
 * 
 */

/*
  ## example :
Input Tree 1:
   1
  / \
 12  4
    /
   2
output 1: [12, 1, 2, 4]
Input Tree 2:
      1
     / \
    2   3
   / \
  4   5

Output 2: [4, 2, 5, 1, 3]
*/

/** Binary Tree Defination :
  struct Node {
      int val;
      Node *left;
      Node *right;
     Node(int x) : val(x), left(NULL), right(NULL) {}
  };
*/

// Recursive code
void UtilInorderTraversal(Node *A, vector<int> &ans)
{
    if (A == NULL)
        return;
    UtilInorderTraversal(A->left, ans);
    ans.push_back(A->val);
    UtilInorderTraversal(A->right, ans);
}
vector<int> InorderTraversal(Node *A)
{
    vector<int> ans;
    UtilInorderTraversal(A, ans);
    return ans;
}

// Iterative code
vector<int> inorderTraversal(Node *A)
{
    stack<Node *> s;
    vector<int> ans;
    Node *root = A;
    while (true)
    {
        while (root)
        {
            s.push(root);
            root = root->left;
        }

        if (s.empty())
        {
            break;
        }

        root = s.top();
        s.pop();
        ans.push_back(root->val);
        root = root->right;
    }
    return ans;
}

//Time complexity : O(n)
