
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
printf("[ ");
for (i = 0; i < n; i++) {
printf("%d", A[i]);
if (i < n-1) printf(", ");
}
printf("]\n");
}


void QuickSort(int a[],int low,int high, int choice) {
    int q;
    
    if (low<high){
	    q=HoarePartition(a,low,high,choice);
	    QuickSort(a,low,q-1,choice);
	    QuickSort(a,q,high,choice);
}}

int HoarePartition (int a[],int low, int high, int choice) {
    int x,i=low-1,j=high+1;
    if(choice==1){
    	x=median(a, low, high);
    	while (1) {
        do  j--; while (a[j] > x);
        do  i++; while (a[i] < x);
        if  (i <= j) 
            swap(&a[i],&a[j]);
        else 
            return i;
    }}
    
    else{
	x=a[high];
	    while (1) {
	        do  j--; while (a[j] > x);
	        do  i++; while (a[i] < x);
	        if  (i < j) 
	            swap(&a[i],&a[j]);
	        else 
	            return i; }}
}

int median(int a[], int p, int r)
{
    int m = (p+r)/2;
    if(a[p] < a[m])
    {
        if(a[p] > a[r])
            return a[p];
        else if(a[m] < a[r])
            return a[m];
    }
    else
    {
        if(a[p] < a[r])
            return a[p];
        else if(a[m] > a[r])
            return a[m];
    }
    return a[r];
}
int main(int argc, char *argv[]) {
	int A[100];
int i, n;
printf("Type elements of A seperated by spaces (type ’end’ to stop):");
i = 0;
while(scanf("%d", &A[i]) == 1) i++;
n = i;

scanf("%*s");
printf("\nType 1 for Choice with median else type 0:\n");
int choice;
scanf("%d", &choice);
printArray(A, n);
QuickSort(A,0,n,choice);
printf("\nSorted array:\n");
printArray(A, n);

	return 0;
}
