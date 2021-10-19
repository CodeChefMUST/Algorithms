/*
Sample Input::

Input Tree 1:
   1
  / \
 6   5
    /
   2
output 1: 3

Input Tree 2:
                    36
                /       \
                5         23
            /       \   /   \
            9       12 45    56
                            /
                           20
output 2: 4

Time Complexity - O(n) -- Traversal of all n elements of the tree
Space Complexity - O(n) -- size of queue = number of elements in the tree // since no element will be enqueued twice.
*/

int HeightOfTree(Node* root)
{
	int height=0;

	queue<Node*> q;

	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		Node* curr=q.front();
		q.pop()

		if(curr==NULL)//NULL means that a level has been traversed hence increment height
			height++;

		if(curr!=NULL)//Push the right and lift child of current Node
		{
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
		else if(!q.empty())//If queue still have elements then push NULL
			q.push(NULL);
	}

	return height;
}