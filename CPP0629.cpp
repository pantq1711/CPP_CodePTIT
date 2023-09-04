#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma, ten;
	int sl;
};
void nhap(SinhVien &a){
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.sl;
}
bool cmp(SinhVien a, SinhVien b){
	if(a.sl == b.sl) return a.ma < b.ma;
	return a.sl > b.sl;
}
void xuat(SinhVien a[], int n, int b, int c){
	for(int i=0; i<n; ++i){
		if(a[i].sl >= b && a[i].sl <= c)
		cout << a[i].ma << " " << a[i].ten << " " << a[i].sl << endl;
	}
}
int main(){
	int n;
	cin >> n;
	struct SinhVien a[n];
	for(int i=0; i<n; ++i) nhap(a[i]);
	sort(a, a+n, cmp);
	int t;
	cin >> t;
	while(t--){
		int b, c;
		cin >> b >> c;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << b << " DEN " << c << " SINH VIEN:" << endl;
		xuat(a, n, b, c);
	}
}
//4
//VIETTEL
//TAP DOAN VIEN THONG QUAN DOI VIETTEL
//40
//FSOFT
//CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
//300
//VNPT
//TAP DOAN BUU CHINH VIEN THONG VIET NAM
//200
//SUN
//SUN*
//50
//1
//30 50
