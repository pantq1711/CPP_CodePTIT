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
void chuanhoa(GiangVien &a){
	stringstream ss(a.khoa);
	string tmp;
	vector <char> v;
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		v.push_back(tmp[0]);
	}
	for(auto it : v) cout << it;
	cout << endl;
}
void xuat(GiangVien a[], int n){
	for(int i=0; i<n; ++i){
		string tmp = to_string(a[i].ma);
		while(tmp.length() < 2) tmp = "0" + tmp;
		cout << "GV" << tmp  << " " << a[i].ten << " ";
		chuanhoa(a[i]);
	}
}
string getlastname(GiangVien &a){
	string tmp, res = "";
	stringstream ss(a.ten);
	while(ss >> tmp){
		res = tmp;
	}
	return res;
}
bool cmp(GiangVien a, GiangVien b){
	string tmp1 = getlastname(a);
	string tmp2 = getlastname(b); 
	if(tmp1 == tmp2) return a.ma < b.ma;
	else return tmp1 < tmp2;
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct GiangVien a[n];
	for(int i=0; i<n; ++i) nhap(a[i]);
	sort(a, a+n, cmp);
	xuat(a, n);
}
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Min Tuan
//An toan thong tin

