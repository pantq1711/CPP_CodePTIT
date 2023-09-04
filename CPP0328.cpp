#include<bits/stdc++.h>
using namespace std;
string n;
int solve(int s){
	int cnt = 0;
	for(int i=0; i<n.length(); i++){
		int sum = 0;
		for(int j=i; j<n.length(); j++){
			sum = sum * 10 + n[j] - '0';
			sum %= s;
			if(sum == 0) cnt++;
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << solve(8) - solve(24) << endl;
	}
}
