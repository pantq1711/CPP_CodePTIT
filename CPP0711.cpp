#include<bits/stdc++.h>
using namespace std;
int a[20], n, check;
void khoitao(){
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
}
void sinh(){
	int i = n;
	while(i>=1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i==0) check = 0;
	else {
		a[i] = 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		check = 1;
		cin >> n;
		khoitao();
		while(check){
			for(int i=1; i<=n; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}

