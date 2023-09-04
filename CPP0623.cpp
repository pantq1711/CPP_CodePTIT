#include<bits/stdc++.h>
using namespace std;
int t;
struct SinhVien{
	string ma, ten, lop, email;
};
void nhap(SinhVien &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop >> a.email;
}
void xuat(SinhVien a[], int n){
	for(int i=0; i<n; ++i){
		if(stoi(a[i].lop.substr(1,2)) == t%100) cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
	}
}
int main(){
	int n;
	cin >> n;
	struct SinhVien ds[n];
	for(int i=0; i<n; ++i) nhap(ds[i]);
	int q;
	cin >> q;
	while(q--){
		cin >> t;
		cout << "DANH SACH SINH VIEN KHOA " << t << ":" << endl;
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
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//2015
