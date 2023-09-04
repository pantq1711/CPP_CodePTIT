#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string n;
		getline(cin, n);
		if(n.find(" ")!= -1) cout << "NO";
		else {
			int cnt = 0;
			for(int i=0; i<n.length(); ++i) if(n[i] == '@') cnt++;
			if(cnt!=1) cout << "NO";
			else {
				string res = n.substr(n.find("@") + 1);
				string tmp = n.substr(0, n.find("@"));
				if(res.length() > 254 || res.length() == 0 || tmp.length() > 64 || tmp.length() == 0) cout << "NO";
				else {
					int cnt = 0;
					for(int i=0; i<res.length(); ++i) if(res[i] == '.') cnt++;
					if(cnt<1) cout << "NO";
					else {
						cout << "YES";
					}
				}
			}
		}
		cout << endl;
	}
}
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa@aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa.com
