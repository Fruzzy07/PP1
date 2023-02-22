#include <bits/stdc++.h>
using namespace std;

int main () {
	int a,c,i;
	cin >> a;
	i = 0;
	c = 0;
	for(int i=1; i<=a; i++){
		if(a%i==0){
			c++;
		}
	} if (c == 2){
		cout << "Yes";
	} else {
		cout << "No";
	}
	
}
