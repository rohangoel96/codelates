#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll visited[112345];
ll nCount,sum;
vector<pair<int,pair<int,int> > > adjlist[112345];
int main(){

	//vector<priority_queue< pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > > vv[9]; WOW I CAN MAKE A VECTOR HAVING QUEUES :)
	ll n,m,x,y,w;
	pair<int,pair<int,int> > p1,p2;
	cin>>n>>m;
	while(m--){
		cin>>x>>y>>w;
		p1.first=w;p1.second.first=x;p1.second.second=y;
		adjlist[x].push_back(p1);
		p1.first=w;p1.second.first=y;p1.second.second=x;
		adjlist[y].push_back(p1);
	}

	priority_queue< pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > qq;
	for(int i=0;i<adjlist[1].size();i++){
		qq.push(adjlist[1][i]);
	}
	nCount++;
	visited[1]=1;
	while(nCount!=n){
		p1=qq.top();
		qq.pop();
		if(!visited[p1.second.second]){
			sum+=p1.first;
			visited[p1.second.second]=1;
			for(int i=0;i<adjlist[p1.second.second].size();i++)
				qq.push(adjlist[p1.second.second][i]);
			nCount++;
			
		}
	}
	cout<<sum<<endl;

	return 0;
}