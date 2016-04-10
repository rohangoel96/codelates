#include <bits/stdc++.h>
using namespace std;

//Longest substring question
string final;
int hush(string s1,string s2,int k,int len1,int len2){
	map<string,int> hmap1;
	for(int i=0;i<=len1-k;i++){
		hmap1[s1.substr(i,k)]=1;
	}
	
	for(int i=0;i<=len2-k;i++){
		if(hmap1[s2.substr(i,k)]==1){
			final=s2.substr(i,k);
			return 1;
		}
	}
		return -1;
	
	}



int main() {
	
	string s1,s2;
	cin>>s1>>s2;
	int len1,len2;
	len1=s1.length();
	len2=s2.length();
	
	if(len2>len1){
		string temp=s1;
		s1=s2;
		s2=temp;
		int tempi=len1;
		len1=len2;
		len2=tempi;
		
	}
	
    int l=0,r=len1-1,mid;
    while(1){
        
        mid=(l+r)/2;
        if(hush( s1, s2,mid,len1,len2)==1){
            if(l==r){break;}
            l=mid+1;}
        else {
        if(hush( s1, s2,mid,len1,len2)==-1){
            if(l==r){break;}
            r=mid-1;}
        
            
        }
    }
    
	cout<<final.length()<<endl;
	
	 return 0;
	}
