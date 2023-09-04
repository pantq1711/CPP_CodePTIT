#include<bits/stdc++.h>
using namespace std;
void solve(int a, string n){
	string kq = "";
	for(char x : n){
		if(x == '4'){
			kq += "322";
		}
		else if(x == '6'){
			kq += "35";
		}
		else if(x == '8'){
			kq += "2227";
		}
		else if(x == '9'){
			kq += "3327";
		}
		else if(x != '0' && x!= '1') kq += x;
	}
	sort (kq.begin(), kq.end(), greater <char>());
	cout << kq << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string a;
		cin >> n >> a;
		solve(n, a);
	}
}
