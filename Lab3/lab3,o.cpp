#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int *y=new int[x];

    for (int i = 0; i < x; i++)
    {
        cin>>y[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < x-1-i; k++)
        {
            if (y[k] < y[k+1])
            {
                swap(y[k], y[k+1]);
            }
            
        }
        
    }
    
    for (int i = 0; i < x; i++)
    {
        cout<<y[i]<<" ";
    }
    
}
