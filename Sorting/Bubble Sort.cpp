#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int arr[],int l,int r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(arr[j]<arr[j-1])
                swap(arr,j-1,j);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    bubbleSort(arr,n-1);
    
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
