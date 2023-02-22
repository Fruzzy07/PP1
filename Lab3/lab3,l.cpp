#include <bits/stdc++.h>
using namespace std;  
void merge(int a[], int b[], int res[],  
    int x, int y) 
{  
    sort(a, a + x); 
    sort(b, b + y);   
  
  
    int i = 0, j = 0, k = 0;  
    while (i < x && j < y) {   
        if (a[i] <= b[j]) {  
            res[k] = a[i];  
            i += 1;  
            k += 1;  
        } else {  
            res[k] = b[j];
            j += 1;  
            k += 1;  
        }  
    }  
    while (i < x) {  
        res[k] = a[i];  
        i += 1;  
        k += 1;  
    }  
    while (j < y) { 
        res[k] = b[j];  
        j += 1;  
        k += 1;  
    }  
}  
  
int main()  
{  
    int x;
    cin>>x;
    int *a = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }

    int y;
    cin>>y;
    int *b = new int[y];
    for (int i = 0; i < y; i++)
    {
        cin>>b[i];
    }
    
    int *res = new int[x+y];

    merge(a,b,res,x,y);

    for (int i = 0; i < x+y; i++)
    {
        cout<<res[i]<<" ";
    }
    
    
  
    return 0;  
}
