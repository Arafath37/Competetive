#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, a, b;
    freopen("input.txt", "r", stdin);
    cin>>n;
    for(int k = 1; k <= n; k++)
    {
        cin>>a>>b;
        cout<<"Case "<<k<<": "<<"sum = "<<a+b<<endl;
    }
    return 0;
}
