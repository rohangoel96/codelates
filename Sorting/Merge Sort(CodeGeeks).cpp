#include <iostream>
#include <algorithm>
#include<cmath>
#include<string>
#include<cstdio>
#include <vector>
#include <sstream>
using namespace std;
#define gc getchar_unlocked


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        //int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        int m=(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}



int main() {
	// your code goes here
    int i1,n,l,r;
    cin>>n;
    int arr[n];
    for(i1=0;i1<n;i1++){
        cin>>arr[i1];
    }
    r=n-1;
    l=0;
    mergeSort(arr,l,r);
    
    for(i1=0;i1<n;i1++){
        cout<<arr[i1]<<" ";
    }
	
	return 0;
}
