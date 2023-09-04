#include<bits/stdc++.h>
using namespace std;
#define ll long long
class PhanSo{
	private :
		ll tu, mau;
	public :
		PhanSo(ll tu, ll mau);
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		friend PhanSo operator + (PhanSo, PhanSo);
};
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1,1);
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong.mau = a.mau * b.mau;
	ll gcd = __gcd(tong.tu, tong.mau);
	tong.tu /= gcd;
	tong.mau /= gcd;
	return tong;
}
PhanSo::PhanSo(ll tu, ll mau){
	this -> tu = tu;
	this -> mau = mau;
}
istream& operator >> (istream& in, PhanSo& a){
	in >> a.tu >> a.mau;
	return in;
}
ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
