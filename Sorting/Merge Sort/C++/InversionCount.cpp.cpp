

int _mergeSort(int a[], int t[], int l, int r);
int merge(int a[], int t[], int l, int m,
		int r);


int mergeSort(int a[], int size)
{
	int t[size];
	return _mergeSort(a, t, 0, size - 1);
}

int _mergeSort(int a[], int t[], int l, int r)
{
	int m, inversion_count = 0;
	if (r > l) {
		m = (r + l) / 2;
		inversion_count += _mergeSort(a, t, l, m);
		inversion_count += _mergeSort(a, t, m + 1, r);

		
		inversion_count += merge(a, t, l, m + 1, r);
	}
	return inversion_count;
}


int merge(int a[], int t[], int l, int m,int r)
{
	int i, j, k;
	int inversion_count = 0;

	i = l; 
	j = m; 
	k = l; 
	while ((i <= m - 1) && (j <= r)) {
		if (a[i] <= a[j]) {
			t[k++] = a[i++];
		}
		else {
			t[k++] = a[j++];

			
			inversion_count = inversion_count + (m - i);
		}
	}

	
	while (i <= m - 1)
		t[k++] = a[i++];

	
	while (j <= r)
		t[k++] = a[j++];

	
	for (i = l; i <= r; i++)
		a[i] = t[i];

	return inversion_count;
}



//Sample Input; a={1,20,6,4,5}
//Sample Output; 5

