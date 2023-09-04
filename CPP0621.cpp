#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma, ten, lop, email;
};
bool cmp(SinhVien &a, SinhVien &b){
	return a.ma < b.ma;
}
int main(){
	int i = 0;
	struct SinhVien ds[1000];
	while(cin >> ds[i].ma){
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin, ds[i].email);
		i++;
	}
	sort(ds, ds+i, cmp);
	for(int j=0; j<i; j++){
		cout << ds[j].ma << " " << ds[j].ten << " " << ds[j].lop << " " << ds[j].email << endl;
	}
	return 0;
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
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT03-B
//sv4@stu.ptit.edu.vn3
