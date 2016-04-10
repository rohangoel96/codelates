#include <bits/stdc++.h>

using namespace std;

int root(int arr[],int i){
	while(arr[i]!=i){
		i=arr[arr[i]];
	}
	return i;
}

void Union(int arr[],int size[],int a,int b){
	int rootA=root(arr,a);
	int rootB=root(arr,b);

	if(size[rootA]<size[rootB]){
		arr[rootA]=arr[rootB];
		size[rootB]+=size[rootA];
	}


	else{
		arr[rootB]=arr[rootA];
		size[rootA]+=size[rootB];
	}
}

int find(int arr[],int a,int b){
	if(root(arr,a)==root(arr,b))
		return 1;
	else
		return 0;
}


int main() {
	
	int n;
	int arr[n],size[n];
	for(int i=0;i<n;i++){
		arr[i]=i;
		size[i]=1;
	}
	


	}
