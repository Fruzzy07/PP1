#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i = 0, a, even = 0, odd = 0;
	cin >> n;
	while (i < n){
		cin >> a;
		i++;
		if (a % 2 == 0) {
			even++;
		}
	    if (a % 2 != 0){
	    	odd++;
		}
	} cout << even << " " << odd;
}
