#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7
int c[1000][1000];
void init(){
	for(int i=0; i<=1000; ++i){
		for(int j=0; j<=i; ++j){
			if(i==j||j==0){
				c[i][j] = 1;
			}
			else {
				c[i][j] = (c[i-1][j] + c[i-1][j-1]) % mod;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		init();
		cout << c[n][k] << endl;
	}
}
