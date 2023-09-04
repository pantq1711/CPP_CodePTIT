#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		long long sum1 = 0, left = 0;
		for(int i=0; i<n; i++){
			sum1 += a[i];
		}
		int check = 0;
		for(int i=0; i<n; i++){
			sum1 -= a[i];
			if(sum1 == left&&i!=n-1){
				check = 1;
				cout << i+1 << " ";
			}
			left += a[i];
		}
		if(check == 0) cout << -1;
		cout << endl;
	}
}

