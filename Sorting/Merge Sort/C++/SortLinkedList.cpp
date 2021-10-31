

node* MergetheSortedList(node* list1, node* list2) 
{ 
	node* res = NULL; 


	if (list1 == NULL) 
		return (list2); 
	else if (list2 == NULL) 
		return (list1); 

	
	if (list1->data <= list2->data) { 
		res = list1; 
		res->next = MergetheSortedList(list1->next, list2); 
	} 
	else { 
		res = list2; 
		res->next = MergetheSortedList(list1, list2->next); 
	} 
	return res; 
} 


void SplitList(node* s, node** front, node** back) 
{ 
	node* p1; 
	node* p2; 
	p2 = s; 
	p1 = s->next; 

	
	while (p1 != NULL) { 
		p1 = p1->next; 
		if (p1 != NULL) { 
			p2 = p2->next; 
			p1 = p1->next; 
		} 
	} 

	
	*front = s; 
	*back = p2->next; 
	p2->next = NULL; 
} 



void MergeSort(node** one) 
{ 
	node* head = *one; 
	node* ptr1; 
	node* ptr2; 

  
	if ((head == NULL) || (head->next == NULL)) { 
		return; 
	} 

	
	SplitList(head, &p1, &p2); 

	
	MergeSort(&p1); 
	MergeSort(&p2); 

	
	*one = MergetheSortedList(p1, p2); 
} 




