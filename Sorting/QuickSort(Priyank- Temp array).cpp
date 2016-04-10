#include <iostream>
using namespace std;

int Partition(int *A, int l, int r){
	int pivot = A[l];
	int temp[r-l+1];
	int i=0, j=r-l;
	for(int it=l+1; it<=r; it++){
		if(A[it]<=pivot)
			temp[i++]=A[it];
		else
			temp[j--]=A[it];
	}
	temp[j]=pivot;
	int k=0;

	for(int ii=l; ii<=r; ii++){
		A[ii]=temp[k];
		k++;
	}
    return l+i;
}

void QuickSort(int *A, int l, int r){
	if(l<r){
	   
		int temp = Partition( A, l, r);
		QuickSort(A, l, temp-1);
		QuickSort(A, temp+1, r);	
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)cin>>arr[i];
	QuickSort(arr, 0, n-1);
	for(int i=0; i<n; i++)cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}