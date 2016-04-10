#include <iostream>
#include <algorithm>
#include<cmath>
#include<string>
#include<cstdio>
#include <vector>
#include <sstream>
using namespace std;
#define gc getchar_unlocked
#define in(arr,n) for(int x = 0; x < n; x++) cin>>arr[x];
#define out(arr,n) for(int x = 0; x < n; x++) cout<<arr[x]<<" ";
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l, int r){
    int key=arr[l];
    int i=l-1,j=r+1;
    while(1){
        do{j--;}
        while(arr[j]>key);
        
        do{
            i++;
        }
        while(arr[i]<key);
            
        if(j>i)
            swap(arr,i,j);
        else
            return j;
    }
}

void quickSort(int arr[],int l,int r){
    int k;
    if(r>l){
        
        k=partition(arr,l,r);
        quickSort(arr,l,k);
        quickSort(arr,k+1,r);
    }
}


int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    
	    in(arr,n);
	        
	    quickSort(arr,0,n-1);
	    
	    out(arr,n);
	       
	    
	}
    
	
	return 0;
}
