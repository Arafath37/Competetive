#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, caSe = 1;
    freopen("input.txt", "r", stdin);
    while(scanf("%d %d", &a, &b) && (a||b))
    {
        cout<<"Case "<<caSe<<": "<<"The sum = "<<a+b<<endl;
        caSe++;
    }
    return 0;
}
