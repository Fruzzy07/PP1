#include <iostream>
using namespace std;

int main () {
	int x1, x2, x3;
	int total;
	cin >> x1 >> x2 >> x3;
	total = (x2-x1) + (x3-x2) + (x3-x1);
	cout << total;
}

