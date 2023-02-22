#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i = 1 , k = 1;
	cin >> n;
	while (n >= k) {
		cout << k<<endl;
		i ++ ;
		k = i * i;
	}
	return 0;
}
