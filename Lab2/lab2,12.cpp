#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i = 1, k;
	cin >> n;
	do
	{ 
		cout << k << " ";
		i ++;
		k = i * i;
	} 
	while (n >= k);
}
