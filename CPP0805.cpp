#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &n){
	for(int i=0; i<n.length(); i++) n[i] = tolower(n[i]);
}
int main(){
	string n;
	set <string> s1, s2, s3, s4;
	ifstream input1, input2;
	input1.open("DATA1.in");
	input2.open("DATA2.in");
	while(input1 >> n){
		chuanhoa(n);
		s1.insert(n), s3.insert(n);
	}
	while(input2 >> n){
		chuanhoa(n);
		s3.insert(n);
		if(s1.count(n)!=0){
			s4.insert(n);
		}
	}
	for(auto it : s3) cout << it << " "; cout << endl;
	for(auto it : s4) cout << it << " "; 
}
