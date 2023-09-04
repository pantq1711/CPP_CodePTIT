#include<bits/stdc++.h>
using namespace std ;
string a[100005] ;
int main () {
	int n , dem = 0 ; cin >> n ;
	for ( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for ( int i = 0 ; i < n ; i++ ) {
		string s = a[i] ;
		for ( int j = 0 ; j < n ; j++ ) {
			if ( j == i ) continue ;
			if ( a[j].find(a[i]) != -1 ) dem++ ;
		}
	}
	cout << dem ;
}

