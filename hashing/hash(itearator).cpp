#include <bits/stdc++.h>

using namespace std;
int main() {
	
	map <string , int > hshmap;

	hshmap["hi"]=1;
	hshmap["aa"]=0;
	
	map<string,int> ::iterator it;

	for(it=hshmap.begin();it!=hshmap.end();it++){
		cout<<it->first<<endl;
	}
	 return 0;
	}
