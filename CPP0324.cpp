#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll digit(string a, ll m){
	ll sum = 0;
	for(int i=0; i<a.length(); ++i){
		sum = sum * 10 + a[i] - '0';
		sum %= m;
	}
	return sum;
}
void solve(string a, ll b, ll m){
	ll sum = digit(a, m), res = 1;
	while(b){
		if(b%2==1){
			res *= sum;
			res %= m;
		}
		sum *= sum;
		sum %= m;
		b /= 2;
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		ll b, m;
		cin >> a >> b >> m;
		solve(a, b, m);
	}
}
