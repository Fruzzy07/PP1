#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i = 0, a, num = 0;
	cin >> n;
	while (i < n){
		cin >> a;
		i++;
	if (a % 10 == 0){
		num++;
	}
	if (a / 10 % 10 == 0 && a != 1){
		num ++;
	}	
} cout << num;
}
