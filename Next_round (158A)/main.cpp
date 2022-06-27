#include <iostream>

using namespace std;

int main()
{
    int n,k,i,counter =0,a[10000];
    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=a[k-1]&& a[i]>0)
        {
            counter++;

        }

    }
    cout<<counter<<endl;
    return 0;
}
