#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	if (n == 1 && k == 2 ){
		cout << k;
	}
	else if (k == 2 && n > k) {
		cout << n;
	} 
	else if (k == 2*n){
		cout << "2";
	}
	else if (n - k < k < n ){
		cout << "4";
	}
}
