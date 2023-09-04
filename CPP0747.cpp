#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 0;
		while(s.find("100")!=-1){
			auto index  = s.find("100");
			s.erase(s.begin() + index, s.begin() + index + 3);
			cnt += 3;
		}
		if(cnt) cout << cnt << endl;
	}
}
