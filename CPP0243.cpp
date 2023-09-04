#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		multiset <int> s;
		map <int, int> mp;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			int tmp = mp[b[i]];
			for(int j=0; j<tmp; j++){
				cout << b[i] << " ";
			}
			mp[b[i]] = 0;
		}
		for(int i=0; i<n; i++){
			if(mp[a[i]]){
			 s.insert(a[i]);	
			}
		}
		for(auto it : s) cout << it << " ";
		cout << endl;
	}
}
