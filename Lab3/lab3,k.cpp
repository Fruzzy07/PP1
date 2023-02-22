#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

int *a = new int[x];
for (int i = 0; i < x; i++)
{
    cin>>a[i];
}

for (int i = 0; i < x; i++)
{
    if (a[i]!=a[i-1])
    {
        cout<<a[i]<<" ";
    }
    
}


}
