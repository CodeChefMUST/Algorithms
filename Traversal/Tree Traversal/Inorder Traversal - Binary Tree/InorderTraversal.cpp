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
void InorderTraversal(Node *A)
{
    if (A == NULL)
        return;
    InorderTraversal(A->left);
    cout << A->val << " ";
    InorderTraversal(A->right);
}

// Iterative code
void inorderTraversal(Node *A)
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
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return;
}

//Time complexity : O(n)
