#include <iostream>
using namespace std;

int main () {
	int n, i; left, right;
	cin >> n >> left >> right;
	int arr[n];
	for (i = 0; i<n; i++)
	cin >> arr[i];
	
	for (int i = left-1; i <= right-1; i++ )
	sum = sum + arr[i];
	
	cout << sum << endl;

	
}
