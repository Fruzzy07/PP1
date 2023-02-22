#include <iostream>

using namespace std;
int main () {
	int a, b, c;
	cin >> a >> b;
	c = a * b;
	if ( a&&b > 9) {
		cout << -1 << endl;
	}
	if (a&&b <= 9) {
		cout << c;
	}
	

}
