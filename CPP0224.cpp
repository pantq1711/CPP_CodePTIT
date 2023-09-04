#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void dfs(int i, int j, int n, int m){
	a[i][j] = 0;
	for(int k=0; k<8; k++){
		int newi = i + dx[k];
		int newj = j + dy[k];
		if(newi >= 0 && newi < n && newj <m && newj >=0 && a[newi][newj] == 1){
			dfs(newi, newj, n, m);
		}
	}
	 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) cin >> a[i][j];
		int cnt = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]==1){
					cnt++;
					dfs(i, j, n, m);
				}
			}
		}
		cout << cnt << endl;
	}
}
