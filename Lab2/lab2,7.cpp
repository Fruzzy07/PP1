#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, k = 0, i = 0, z, even_count, odd_count, d, a;
	cin >> n;
	while (i<n){
		i++;
		cin >> z;
		if (z > k ){
			k = z;
		}
	}
	if (k % 2 == 0){
		cout << d;
		even_count += 1;
		d = k % 2;
	}
	
}
