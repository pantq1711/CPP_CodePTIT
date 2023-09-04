#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
class NhanVien{
	private :
		string ten, gt, ns, dc, mst, hd;
		int ma;
	public :
		NhanVien();
		string getns(){
			return ns;
		}
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
};
NhanVien::NhanVien(){
	ten = gt = ns = dc = mst = hd = "";
	ma = 0;
}
istream& operator >> (istream& in, NhanVien &a){
	a.ma = ++cnt;
	scanf("\n");
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.hd;
	return in;
}
ostream& operator << (ostream& out, NhanVien a){
	string tmp = to_string(a.ma);
	while(tmp.size() < 5) tmp = "0" + tmp;
	out << tmp << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
	return out;
}
bool cmp(NhanVien a, NhanVien b){
	long sum1 = stoi(a.getns().substr(6)) * 10000 + stoi(a.getns().substr(3,4))+ stoi(a.getns().substr(0,1)) * 100;
	long sum2 = stoi(b.getns().substr(6)) * 10000 + stoi(b.getns().substr(3,4)) + stoi(b.getns().substr(0,1)) * 100;
	return sum1 < sum2;
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//N
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
