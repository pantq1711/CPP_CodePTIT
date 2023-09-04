#include<bits/stdc++.h>
using namespace std;
int main(){
	map <int, int> mp;
	int n;
	ifstream input;
	input.open("DATA.in");
	while(input >> n){
		mp[n]++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	input.close();
}

