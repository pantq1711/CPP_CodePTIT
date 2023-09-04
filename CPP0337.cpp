#include<bits/stdc++.h>
using namespace std;
void solve(string n){
	map <char, int> mp;
	for(char x : n) mp[x]++;
	int r = 1e6, l = 0, cnt = 0;
	int dem[256];
	memset(dem, 0, sizeof(dem));
	for(int i=0; i<n.length(); ++i){
		dem[n[i]]++;
		if(dem[n[i]] == 1) cnt++;
		if(cnt == mp.size()){
			while(dem[n[l]] > 1){
				dem[n[l]] --;
				++l;
			}
			r = min(r, i - l + 1);
		}
	}
	cout << r << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		solve(n);
	}
}

