#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class SinhVien{
	private :
		string ten, lop, ns;
		float gpa;
	public :
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};
void chuanhoa(string &n){
	n[0] = toupper(n[0]);
	for(int i=1; i<n.length(); ++i) n[i] = tolower(n[i]);
}
SinhVien::SinhVien(){
	ten = lop = ns = "";
	gpa = 0;
}
istream& operator >> (istream& in, SinhVien &a){
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}
ostream& operator << (ostream& out, SinhVien a){
 	++cnt;
 	if(a.ns[2]!='/') a.ns = "0" + a.ns;
 	if(a.ns[5]!='/') a.ns.insert(3, "0");
 	vector <string> v;
 	string tmp;
 	stringstream ss(a.ten);
 	while(ss >> tmp){
 		chuanhoa(tmp);
 		v.push_back(tmp);
	 }
	string tmp1 = to_string(cnt);
	while(tmp1.length()<3) tmp1 = "0" + tmp1;
	out << "B20DCCN" << tmp1 << " ";
	for(auto it : v) out << it << " ";
	out << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
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
//1
//nGuyEn  vaN    biNH
//D20CQCN01-B
//2/12/2002
//3.1
