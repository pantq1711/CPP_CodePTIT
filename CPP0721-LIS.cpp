#include<bits/stdc++.h>
using namespace std;
int main(){
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector <int> v(n);
//		v[i] : day con tang dai nhat ket thuc o chi so i
//		v[i] = max(v[i], v[j]+1) : a[i] > a[j] 
		for(int i=0; i<n; ++i){
			cin >> a[i];
			v[i] = 1;
		}
		for(int i=0; i<n; ++i){
//			duyet qua tung phan tu dung truoc chi so i
			for(int j=0; j<i; ++j){
				if(a[i] > a[j]) {
					v[i] = max(v[i], v[j] + 1);
				}
			}
		}
		cout << *max_element(v.begin(), v.end()) << endl;
	}
//}
