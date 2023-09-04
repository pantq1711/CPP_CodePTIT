#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma, ten, lop, email;
};
void nhap(SinhVien &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop >> a.email;
}
void xuat(SinhVien a[], int n, string t){
	for(int i=0; i<n; ++i){
		if(a[i].lop==t) cout << a[i].ma << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
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
		string t;
		cin >> t;
		cout << "DANH SACH SINH VIEN LOP " << t << ":" << endl;
		xuat(ds, n, t);
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
//sv3@st.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//D15CQKT02-B
