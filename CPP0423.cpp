#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		} 
		int cnt = 0;
		for(int i=0; i<n; i++){
			if(a[i]<=k) cnt++;
		}
		int cnt1 = 0;
		for(int i=0; i<cnt; i++){
			if(a[i]<=k) cnt1++;
		}
		int kq = cnt1;
		for(int i=cnt; i<n; i++){
			if(a[i-cnt]<=k) cnt1 --;
			if(a[i]<=k) cnt1 ++;
			kq = max(kq,cnt1);
		}
		cout << cnt - kq << endl;
	}
	return 0;
}

