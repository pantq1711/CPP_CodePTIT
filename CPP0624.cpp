#include<bits/stdc++.h>
using namespace std;
string t;
struct SinhVien{
	string ma, ten, lop, email;
};
void chuanhoa(string &n){
	for(int i=0; i<n.length(); ++i) n[i] = toupper(n[i]);
}
void nhap(SinhVien &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop >> a.email;
}
void xuat(SinhVien a[], int n){
	for(int i=0; i<n; ++i){
		if( a[i].ma[5] == t[0] && a[i].lop[0] == 'D' && (a[i].ma[5] == 'A'||a[i].ma[5] == 'C')||a[i].ma[5] == t[0] && a[i].ma[5]!='A'&&a[i].ma[5]!='C') cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
	}
}
int main(){
	int n;
	cin >> n;
	struct SinhVien ds[n];
	for(int i=0; i<n; ++i) nhap(ds[i]);
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		getline(cin, t);
		chuanhoa(t);
		cout << "DANH SACH SINH VIEN NGANH " << t << ":" << endl;
		xuat(ds, n);
	}
}
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//E15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCAT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//2
//Ke toan
//Cong nghe thong tin
//An toan thong tin
