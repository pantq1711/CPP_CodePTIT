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
		void rutgon();
};
PhanSo::PhanSo(ll tu, ll mau){
	this -> tu = tu;
	this -> mau = mau;
}
istream& operator >> (istream& in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}
ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}
void PhanSo::rutgon(){
	ll gcd = __gcd(tu, mau);
	tu /= gcd;
	mau /= gcd;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
