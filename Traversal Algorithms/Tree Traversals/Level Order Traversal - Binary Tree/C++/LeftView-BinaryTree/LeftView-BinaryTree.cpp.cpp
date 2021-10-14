/*
Input Tree -
                    36
                /       \
                5         23
            /       \   /   \
            9       12 45    56
                            /
                           20
Output -

        36 5 9 20

Time Complexity - O(n) -- Traversal of at-most n elements of the tree
Space Complexity - O(n) -- size of queue = number of elements in the tree // since no element will be enqueued twice.

*/

void LeftViewBinaryTree(Node* root)
{
	if (!root)
		return;

	queue<Node*> lv;
	lv.push(root);

	while (!lv.empty())
	{
		// number of nodes at current level
		int s = lv.size();

		// Traverse all nodes of current level
		for(int i = 1; i <= s; i++)
		{
			Node* temp = lv.front();
			lv.pop();

			// Print the left most element at the current level
			if (i == 1)
				cout<<temp->data<<" ";

			// Add left node to lv
			if (temp->left != NULL)
				lv.push(temp->left);

			// Add right node to lv
			if (temp->right != NULL)
				lv.push(temp->right);
		}
	}
}
