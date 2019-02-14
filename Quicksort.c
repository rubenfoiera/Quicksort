
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
void printArray(int A[], int n) {
int i;
printf("[");
for (i = 0; i < n; i++) {
	printf("%d", A[i]);
	if (i < n-1) printf(", ");
	}
	printf("]");
}

void QuickSort(int a[],int start,int end) {
    int q;
    if (start<end){
	    q=HoarePartition(a,start,end);
	    QuickSort(a,start,q-1);
	    QuickSort(a,q,end);
}}

int HoarePartition (int a[],int p, int r) {
    int x=a[r],i=p-1,j=r+1;
    while (1) {
        do  j--; while (a[j] > x);
        do  i++; while (a[i] < x);
        if  (i < j) 
            swap(&a[i],&a[j]);
        else 
            return i;
    }
}

int main(int argc, char *argv[]) {
	int A[100];
int i, n;
printf("Type elements of A seperated by spaces (type end to stop):");
i = 0;
while(scanf("%d", &A[i]) == 1) i++;
n = i;

scanf("%*s");
printArray(A, n);
QuickSort(A,0,n);
printf("\nSorted array:\n");
printArray(A, n);

	return 0;
}
