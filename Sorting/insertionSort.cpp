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

void insertionSort(int arr[],int n){
    int key,j;
    for(int i=1;i<=n;i++){
        key=arr[i];
        j=i;
        while(j>0&&arr[j-1]>key){
        arr[j]=arr[j-1];
            j--;
    }
        arr[j]=key;
    }
}

int main() {
	// your code goes here
	int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    insertionSort(arr,n-1);
    
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
	
	return 0;
}
