#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main (){
	int n, a = 1, b;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	int max = arr[0];
	int min = arr[0];
	while (a < n){
		cin >> b;
		if (b > max){
			max = b;
		} a++;
		} while (a < n){
		cin >> b;
		if (b < min){
			min = b;
		} a++;
}        cout << min;
}
