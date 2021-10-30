//Merge Sort in C programming Language

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void merge(int a[], int i, int m, int j)
{
	
	int n1 = m - i + 1;
	int n2 = j - m;

	
	int L[n1], R[n2];


	for (int x = 0; x < n1; x++)
		L[x] = a[i + x];
		
	for (int y = 0; y < n2; y++)
		R[y] = a[m + 1 + y];





int x =0, y=0, z=i;





	
	while (x < n1 && y < n2) {
		if (L[x] <= R[y]) {
			a[z] = L[x];
			x++;
		}
		else {
			a[z] = R[y];
			y++;
		}
		z++;
	}

	
	while (x < n1) {
		a[z] = L[x];
		x++;
		z++;
	}


	while (y < n2) {
		a[z] = R[y];
		y++;
		z++;
	}
}

void mergeSort(int a[], int i, int j)
{
	if (i < j) {
		
		int mid = i + (j-i) / 2;

		
		mergeSort(a, i, mid);
		mergeSort(a, mid + 1, j);

		merge(a, i, mid, j);
	}
}


void printArr(int a[], int size){
    
	for (int x = 0; x < size; x++)
		printf("%d ", a[x]);
}


void main()
{
	
	int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("\nEnter the elements of the array: \n");
    int a[n];
    
    
    for(int x=0; x<n; x++)
    scanf("%d",&a[x]);

	mergeSort(a, 0, n - 1);

	printf("\nSorted array is :\n");
    	printArr(a, n);
	

}
