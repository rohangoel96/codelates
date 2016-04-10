#include <iostream>
#include <algorithm>
#include<cmath>
#include<string>
#include<cstdio>
#include <vector>
#include <sstream>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

void merge(int arr[],int l1,int r1,int l2,int r2){
    int i=l1;int j=l2;int k=0;
    int brr[-l1-l2+2+r1+r2];
    while(i<=r1&&j<=r2){
        if(arr[i]<=arr[j]){brr[k++]=arr[i++];}
        else              {brr[k++]=arr[j++];}
    }
    while(i<=r1)brr[k++]=arr[i++];
    while(j<=r2)brr[k++]=arr[j++];
    k=0;
    for(i=l1;i<=r2;i++)
        arr[i]=brr[k++];
}

void mergeSort(int arr[],int l,int r){
    if((r-l)>0){
        mergeSort(arr,l,(l+r)/2);
        mergeSort(arr,((l+r)/2)+1,r);
        merge(arr,l,(l+r)/2,(l+r)/2+1,r);
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
