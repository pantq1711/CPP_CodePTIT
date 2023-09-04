#include<bits/stdc++.h>
using namespace std;
long solve(string n){
	long sum = 0;
	if(n.length()>9) return 0;
	for(int i=0; i<n.length(); i++){
		if(isdigit(n[i])){
			sum = sum * 10 + n[i] - '0';
		}
		else return 0;
	}
	if(sum <= 100000000) return (int) sum;
	return 0;
}
int main(){
	string n;
	ifstream input;
	input.open("DATA.in");
	long long sum = 0;
	while(input >> n){
	 	sum += solve(n);
	}
	input.close();
	cout << sum;
}
