#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string ten, lop, ns;
		float gpa;
	public :
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};
SinhVien::SinhVien(){
	this -> ten = ten;
	this -> lop = lop;
	this -> ns = ns;
	this -> gpa = gpa;
}
istream& operator >> (istream& in, SinhVien& a){
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}
ostream& operator << (ostream& out, SinhVien a){
	if(a.ns[2]!='/') a.ns = "0" + a.ns;
	if(a.ns[5]!='/') a.ns.insert(3, "0");
	out << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out; 
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
//Nguyen Hoa Binh
//D20CQCN04-B
//2/2/2002
//2

