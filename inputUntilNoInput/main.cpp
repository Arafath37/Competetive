#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    freopen("input.txt", "r", stdin);
    while(scanf("%d %d", &a, &b) == 2)
    {
        printf("The sum is %d\n", a+b);
    }
    return 0;
}
