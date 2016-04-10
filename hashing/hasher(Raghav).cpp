#include<bits/stdc++.h>

using namespace std;

#define ll long long

string A;
long long H[251234];
long long pow26mod[251234], invpow26mod[251234], mod = 1e9 + 7;

long long pow(long long X, long long Y, long long M) { // O(logY) to calculate (X ^ Y) % M
	long long ret = 1;
	while(Y) {
		if(Y % 2) {
			ret *= X;
			ret %= M;
		}
		Y /= 2;
		X *= X;
		X %= M;
	}
	return ret;
}

long long inverse(long long A, long long M) { // calculates (1/A) % M, (M MUST BE PRIME)
	return pow(A, M - 2, M);
}

void precompute_mod26() { // linearly compute pow(26, i, mod) as welong long as pow(1/26, i, mod)
	pow26mod[0] = 1;
	invpow26mod[0] = 1;
	for(int i = 1; i < 251234; i += 1) { 
		pow26mod[i] = pow26mod[i - 1] * 26;
		pow26mod[i] %= mod;
		invpow26mod[i] = inverse(pow26mod[i], mod);
	}
}

long long prefixhash(string A, long long * H) { // takes O(N) time to pre compute hash[A[0...i]] for along long i
	int slen = A.size();
	H[0] = A[0] - 'a';
	for(int i = 1; i < slen; i += 1) {
		H[i] = H[i - 1] + (A[i] - 'a') * pow26mod[i]; // A[i] - 'a' does [a, z] to [0, 25]
		H[i] %= mod;
	}
}

long long substringhash(long long * H, int i, int j) { // post prefixhash construction, O(1) to return a subtring's hash
	long long ret = H[j];
	if (i > 0) ret -= H[i - 1];
	if(ret < mod) ret += mod;
	ret *= invpow26mod[i];
	return ret % mod;
}

int main() {
	cout<< 'a'+0<<endl;
	cout<<444;
}