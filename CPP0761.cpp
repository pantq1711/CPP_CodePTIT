#include<bits/stdc++.h>
using namespace std;
void solve(long long a, string b){
	long long x = 0;
	for(int i=0; i<b.length(); ++i){
		x = x * 10 + b[i] - '0';
		x %= a;
	}
	cout << __gcd(a, x) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		string b;
		cin >> a >> b;
		solve(a, b);
	}
}
