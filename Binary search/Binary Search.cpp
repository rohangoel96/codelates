#include <bits/stdc++.h>

using namespace std;

int search(int k,int arr[],int size){
    int l=0,r=size-1,mid;
    while(1){
        
        mid=(l+r)/2;
        if(k>arr[mid]){
            if(l==r){break;}
            l=mid+1;}
        else {
        if(k<arr[mid]){
            if(l==r){break;}
            r=mid-1;}
        else
            return 1;
        }
    }
    return 0;
}

int main(){
    
	return 0;
	
}
