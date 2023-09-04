#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	ifstream input;
	ofstream output;
	input.open("PTIT.in");
	output.open("PTIT.out");
	while(input.eof() == 0){
		getline(input, n);
		output << n << endl;
	}
	input.close();
	output.close();
}
