#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	ifstream input;
	input.open("DATA.in");
	set <int> s1, s2, s3;
	input >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		input >> a[i];
		s1.insert(a[i]);
	}
	for(int i=0; i<m; i++){
		input >> b[i];
		if(s1.count(b[i])!=0) s2.insert(b[i]);
	}
	for(auto it : s2) cout << it << " ";
	input.close();
}
