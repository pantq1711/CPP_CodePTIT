#include<bits/stdc++.h>
using namespace std;
void solve(string s1, string s2){
	int dem1[256] = {0}, dem2[256] = {0};
	for(char x : s2){
		dem2[x] ++;
	}
	int res = 1e9, l = 0, cnt = 0, index = -1;
	for(int i=0; i<s1.length(); ++i){
		dem1[s1[i]]++;
		if(dem1[s1[i]] <= dem2[s1[i]]) cnt++;
		if(cnt == s2.length()){
			while(dem1[s1[l]] > dem2[s1[l]] || dem2[s1[l]] == 0){
				if(dem1[s1[l]] > dem2[s1[l]]) {
					dem1[s1[l]] --;
				}
				++l;
			}
			if(res > i - l + 1){
				res = i - l + 1;
				index = l;
			}
		}
	}
	if(index == -1) cout << -1;
	else cout << s1.substr(index, res);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string n, m;
		cin >> n >> m;
		solve(n, m);
	}
}
