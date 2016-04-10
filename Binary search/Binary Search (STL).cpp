For advanced users who are comfortable with STL: There are a couple of C++ STL functions which are associated closely with Binary Search, and can be used, to ease out a lot of things:

binary_search(): Return true if the item in equal to any element in the range passed as parameter.
lower_bound(): Returns an iterator to the first element which is greater than or equal to the item.
upper_bound(): Returns an iterator to the first element which is greater than the item.
equal_range(): Returns a pair of iterators whose first element is equal to the lower_bound() and second element is equal to the upper_bound().
All these four STL functions are a part of the header in C++.




//real code


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



int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	in(arr,n)
	
	int * lb;
	int * ub;
	
	pair <int*,int*> p=equal_range(arr,arr+n,k);
	lb=lower_bound(arr,arr+n,k);
	ub=upper_bound(arr,arr+n,k);
    
    cout<<lb-arr<<" has a "<<lb[0]<<endl;
    
    cout<<ub-arr<<" has a "<<ub[0]<<endl;
    cout<<*p.first<<" and "<<*p.second<<endl;
   
	
	return 0;
}
