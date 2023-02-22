#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int x,y;
cin>>x>>y;
int *a = new int[x];
for (int i = 0; i < x; i++)
{
    cin>>a[i];
}

for (int i = 0; i < x; i++)
{
    if (a[i]==y)
    {
        cout<<i+1<<endl;
    }

} 

for (int i = 0; i < x; i++)
{
    if (a[i]<y && y<a[i+1])
    {
        cout<<i+1<<endl;
    }
 
}

for (int i = x-1; i < x; i++)
{
    if (a[i]<y)
    {
        cout<<x<<endl;        
    }
    
}
}

