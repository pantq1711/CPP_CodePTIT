#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		vector <int> v;
		long long res = 0;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		for(int i=0; i<n-1; ++i){
//			vector <int> :: iterator idex;
//			index = lower_bound(v.begin(), v.end(), v[i] + k);
			int index = lower_bound(v.begin(), v.end(), v[i] + k) - v.begin();
			res += index - i - 1;
		}
		cout << res << endl;
	}
}
