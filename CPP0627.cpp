#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
struct GiangVien{
	string ten, khoa;
	int ma;
};
void nhap(GiangVien &a){
	a.ma = ++cnt;
	getline(cin, a.ten);
	getline(cin, a.khoa);
}
string chuanhoa2(string &n){
	stringstream ss(n);
	string tmp;
	string res = "";
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		res+=tmp[0];
	}
	return res;
}
string chuanhoa(string &n){
	stringstream ss(n);
	string tmp;
	string res = "";
	while(ss >> tmp){
		for(int i=0; i<tmp.length(); ++i) tmp[i] = tolower(tmp[i]);
		res+=tmp;
	}
	return res;
}
void xuat(GiangVien a[], int n, string q){
	for(int i=0; i<n; ++i){
		for(int j=0; j<q.length(); ++j) q[j] = tolower(q[j]);
		if(chuanhoa(a[i].ten).find(q)!=-1){
			string tmp = to_string(a[i].ma);
			while(tmp.length() < 2) tmp = "0" + tmp;
			cout << "GV" << tmp  << " " << a[i].ten << " ";
			cout << chuanhoa2(a[i].khoa) << endl;
		}
	}
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct GiangVien a[n];
	for(int i=0; i<n; ++i) nhap(a[i]);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string q;
		getline(cin, q);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << q << ":" << endl;
		xuat(a, n, q);
	}
}
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//aN
