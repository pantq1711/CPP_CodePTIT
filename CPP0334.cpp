#include<bits/stdc++.h>
using namespace std;
void solve(string n){
	long sum = 0, digit = 0;
	for(int i=0; i<n.length(); i++){
		if(isdigit(n[i])){
			digit = digit * 10 + n[i] - '0';
		}
		else {
			sum += digit;
			digit = 0;
		}
	}
	cout << sum<< endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		n = n + "hahaha";
		solve(n);	
	}
}
