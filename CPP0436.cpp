#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> a(n);
		for(int i=0; i<n; ++i) cin >> a[i];
		vector <int> b = a;
		sort(b.begin(), b.end());
		for(int i=0; i<n; ++i){
			auto it = upper_bound(b.begin(), b.end(), a[i]);
			if(it!=b.end()) cout << *it << " ";
			else cout << "_" << " ";
		}
		cout << endl;
	}
}
