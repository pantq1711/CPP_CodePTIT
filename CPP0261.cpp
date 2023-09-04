#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n ;
	int a[n][n];
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++) cin >> a[i][j];
	cin >> m;
	int b[m][m];
	for(int i=0; i<m; i++)
	for(int j=0; j<m; j++) cin >> b[i][j];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j] *= b[i%m][j%m];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//2
//1 0
//0 2
