#include<bits/stdc++.h>
using namespace std;
string tong(string &a, string &b){
	if(a.length() < b.length()) swap(a, b);
	while(a.length() > b.length()) b = "0" + b;
	string res = "";
	int nho = 0;
	for(int i=0; i<a.length(); ++i){
		int tmp = a[i] - '0' + b[i] - '0' + nho;
		if(tmp > 9){
			tmp %= 10;
			nho = 1;
		}
		else nho = 0;
		res = to_string(tmp) + res;
	} 
	if(nho!=0) res = "1" + res;
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
	}
}
