#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
int cntkh = 0, cntmh = 0, cnthd = 0;
map <string, KhachHang> mp1;
map <string, MatHang> mp2;
class KhachHang{
	public :
		string maKH, tenKH, gt, ns, dc;
	public :
		friend class HoaDon;
		KhachHang(){
			maKH = tenKH = gt = ns = dc = "";
		}
		friend istream& operator >> (istream& in, KhachHang &a){
			++cntkh;
			scanf("\n");
			if(cntkh < 10) a.maKH = "KH00" + to_string(cntkh);
			else a.maKH = "KH0" + to_string(cntkh);
			getline(in, a.tenKH);
			getline(in, a.gt);
			getline(in, a.ns);
			getline(in, a.dc);
			mp1[a.maKH] = a;
			return in;
		}
};
class MatHang{
	public :
		string maMH, tenMH, dv;
		int mua, ban;
		MatHang(){
			maMH = tenMH = dv = "";
			mua = ban = 0;
		}
		friend class HoaDon;
		friend istream& operator >> (istream& in, MatHang &a){
			++cntmh;
			scanf("\n");
			if(cntmh < 10) a.maMH = "MH00" + to_string(cntmh);
			else a.maMH = "MH0" + to_string(cntmh);
			getline(in, a.tenMH);
			getline(in, a.dv);
			in >> a.mua >> a.ban;
			mp2[a.maMH] = a;
			return in;
		}
};
class HoaDon{
	public :
		string maHD, makh, mamh;
		int sl;
		long loinhuan;
		HoaDon(){
			maHD = makh = mamh = "";
			loinhuan = sl = 0;
		}
		friend istream& operator >> (istream& in, HoaDon &a){
			++cnthd;
			if(cnthd < 10) a.maHD = "HD00" + to_string(cnthd);
			else a.maHD = "HD0" + to_string(cnthd);
			in >> a.makh >> a.mamh;
			in >> a.sl;
			a.loinhuan = 1ll*(a.sl*(mp2[a.mamh].ban-mp2[a.mamh].mua)) ;
			return in;
		}
		friend ostream& operator << (ostream& out, HoaDon a){
			out << a.maHD << " " << mp1[a.makh].tenKH << " " << mp1[a.makh].dc << " " << mp2[a.mamh].tenMH << " " << a.sl << " " << 1ll * (a.sl * mp2[a.mamh].ban) << " " << a.loinhuan << endl;
			return out;
		}
};
bool cmp(HoaDon a, HoaDon b){
	if(a.loinhuan == b.loinhuan) return a.maHD < b.maHD;
	return a.loinhuan > b.loinhuan;
}
void sapxep(HoaDon a[], int n){
	sort(a, a+n, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
//2
//Nguyen Van Nam
//Nam
//12/12/1997
//Mo Lao-Ha Dong-Ha Noi
//Tran Van Binh
//Nam
//11/14/1995
//Phung Khoang-Nam Tu Liem-Ha Noi
//2
//Ao phong tre em
//Cai
//25000
//41000
//Ao khoac nam
//Cai
//240000
//515000
//3
//KH001 MH001 2
//KH001 MH002 3
//KH002 MH002 4
