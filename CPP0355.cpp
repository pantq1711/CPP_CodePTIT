#include<bits/stdc++.h>
using namespace std;
int main(){
	string n, tmp = "";
	vector <string> v;
	while(cin >> n){
		if(tmp == "") tmp += n;
		else tmp += " " + n;
		if(tmp[tmp.size()-1] == '.' || tmp[tmp.size()-1] == '?' || tmp[tmp.size()-1] == '!'){
		tmp.erase(tmp.find(tmp[tmp.size()-1]));
		tmp[0] = toupper(tmp[0]);
		for(int i=1; i<tmp.length(); i++) tmp[i] = tolower(tmp[i]);
		v.push_back(tmp);
		tmp = "";
	}
	}
	for(string x : v){
		cout << x << endl;
	}
}

