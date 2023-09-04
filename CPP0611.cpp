#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class SinhVien{
	private :
		string ma, ten, lop, ns;
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
	this -> ma = ma;
}
istream& operator >> (istream& in, SinhVien &a){
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}
ostream& operator << (ostream& out, SinhVien a){
	cnt++;
	if(a.ns[2] != '/') a.ns = "0" + a.ns;
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	string tmp = to_string(cnt);
	while(tmp.size() < 3) tmp = "0" + tmp;
	out << "B20DCCN" << tmp << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
//2
//Nguyen Van B
//D20CQCN02-B
//2/12/2002
//3.19
//Nguyen Van An
//D20CQCN01-B
//2/12/2002
//3.19



