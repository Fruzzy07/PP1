#include <iostream>
using namespace std;

int main (){
	long long n, i;
	long long sum=0;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	cin >> arr[i];
	for (i = 0; i < n; i++) 
			sum += arr[i];
			cout << sum;
}

