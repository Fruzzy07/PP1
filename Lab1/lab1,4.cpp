#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,m,k,firstdigit,lastdigit,sum;
	cin >> n;
	cin >> k;
	firstdigit = k / pow (10, 2);
	lastdigit = k % 10;
	m = firstdigit + lastdigit;
	sum = n + m;
	cout << sum;
	return 0;
}

