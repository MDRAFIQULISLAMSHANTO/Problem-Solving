#include <iostream>
using namespace std;
int main ()
{
    int n,s,ans,a[4],i;
    while (Cin>>n)
    {
        s=0;
        while (n--)
        {
            ans=0;
            for (i=0;i<3;i++)
            {
                cin>>a[i];
                if (a[i]==1)
                    ans++;
            }
            if (ans>=2)
                s++;
        }
        cout<<s<<endl;
    }
    return 0;
}