#include <bits/stdc++.h>

using namespace std;

int moinp(long long arr[],int n){
    long long int tnew,told;
    int ind=0,j;
    
    for(j=0;j<n;j++){
        if(j!=0){
            scanint(tnew);
            if(told!=tnew){
                arr[ind++]=tnew;
                told=arr[ind-1];
            }
    }
    else{
        cin>>told;
        arr[ind++]=told;
    }
    
}
    return ind;
}

int main(){
  return 0;
}
