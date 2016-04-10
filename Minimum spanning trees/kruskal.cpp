#include <bits/stdc++.h>

using namespace std;

#define ll long long



ll sum,size[112345],arr[112345];
priority_queue< pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > qq;

int root(ll arr[],ll i){
	while(arr[i]!=i){
		i=arr[arr[i]];
	}
	return i;
}

void Union(ll arr[],ll size[],ll a,ll b){
	ll rootA=root(arr,a);
	ll rootB=root(arr,b);

	if(size[rootA]<size[rootB]){
		arr[rootA]=arr[rootB];
		size[rootB]+=size[rootA];
	}


	else{
		arr[rootB]=arr[rootA];
		size[rootA]+=size[rootB];
	}
}

int find(ll arr[],ll a,ll b){
	if(root(arr,a)==root(arr,b))
		return 1;
	else
		return 0;
}

int main(){

	ll n,m,x,y,w;
	cin>>n>>m;
	pair<ll,pair<ll,ll> > p1,p2;
	while(m--){
		cin>>p1.second.first;
		cin>>p1.second.second;
		cin>>p1.first;
		qq.push(p1);

	}
	for(int i=1;i<=n;i++){
		arr[i]=i;size[i]=1;
	}

while(!qq.empty()){
	p2=qq.top();
	qq.pop();
	x=p2.second.first;
	y=p2.second.second;
	w=p2.first;

	if(!find(arr,x,y)){
		sum+=w;
		Union(arr,size,x,y);
	}
}
ll temp=arr[1];
for(int i=1;i<=n;i++){
	if(!find(arr,1,i)){
		cout<<-1<<endl;
		return 0;
	}
}
cout<<sum<<endl;

	return 0;
}

	