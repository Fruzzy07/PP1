#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, c;
    cin >> n >> m >> c;
    int *a = new int[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (int i=0; i<m-1; i++){        
        cout << a[i] << " ";
    }

    for (int i=c-1; i>=m-1; i--){
        cout << a[i] << " ";

    }
    for (int i=c; i<n; i++){
        cout << a[i] << " ";
    }
}
