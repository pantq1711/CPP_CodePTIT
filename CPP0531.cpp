#include<bits/stdc++.h>
using namespace std;
struct ToaDo{
	int x, y, z;
};
ToaDo a[4];
ToaDo b[3];
ToaDo vecAB;
void solve(){
	b[0].x = a[1].x - a[0].x;
	b[0].y = a[1].y - a[0].y;
	b[0].z = a[1].z - a[0].z;
	b[1].x = a[2].x - a[0].x;
	b[1].y = a[2].y - a[0].y;
	b[1].z = a[2].z - a[0].z;
	b[2].x = a[3].x - a[0].x;
	b[2].y = a[3].y - a[0].y;
	b[2].z = a[3].z - a[0].z;
	vecAB.x = b[0].y * b[1].z - b[0].z * b[1].y;
	vecAB.y = b[0].z * b[1].x - b[0].x * b[1].z;
	vecAB.z = b[0].x * b[1].y - b[0].y * b[1].x;
	int res = vecAB.x * b[2].x + vecAB.y * b[2].y + vecAB.z * b[2].z;
	if(!res) cout << "YES";
	else cout << "NO"; cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=0; i<4; ++i) cin >> a[i].x >> a[i].y >> a[i].z;
		solve();
	}
}
