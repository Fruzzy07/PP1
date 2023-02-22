#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, a = 1, b, num = 0;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	int max = arr[0];
	for(int i = 1; i < n; i++){
		cin >> arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
	}
	for(int i=1; i<n; i++){
		if(arr[i]==max){
			cout << i+1;
		} 
		}
}
