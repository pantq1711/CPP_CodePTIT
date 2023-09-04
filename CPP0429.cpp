#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n+1] = {0};
	for(int i=0; i<b; i++) {
		int x; cin >> x;
		a[x] = 1; //den bi hong
	}
	int cnt = 0;
	for(int i=1; i<=k; i++){
		if(a[i]==1)
		cnt++;
	}
	int kq = cnt;
	for(int i=k+1; i<=n; i++){
		if(a[i-k]==1) cnt--;
		if(a[i]==1) cnt++;
		kq = min(cnt, kq);
	}
	cout << kq;
}
