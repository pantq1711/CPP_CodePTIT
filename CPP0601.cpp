#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string ten, lop, ns;
		float gpa;
	public : SinhVien();
		void nhap();
		void xuat();
};
SinhVien::SinhVien(){
	this -> ten = "0";
	this -> lop = "0";
	this -> ns = "0";
	this -> gpa = 0;
}
void SinhVien::nhap(){
	getline(cin, ten);
	cin >> lop >> ns >> gpa;
}
void SinhVien::xuat(){
	cout << "B20DCCN001" << " " << ten << " " << lop << " ";
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3, "0");
	cout << ns << " " << fixed << setprecision(2) << gpa;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
//Nguyen Van A
//D20CQCN04-B
//2/2/2002
//2
