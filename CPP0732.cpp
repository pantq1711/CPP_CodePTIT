#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set <long long> s;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		long long l = 0, sum = a[0], tmp = 0;
		while(l < n){
			if(a[l]<a[l+1]){
				sum += a[l+1];
			}
			else {
				s.insert(sum);
				sum = 0;
			}
			l++;
		}
		if(sum == 0){
			for(int i=0; i<n; i++){
				tmp += a[i];
			}
		}
		for(auto it : s) cout << it << " ";
	}
}
