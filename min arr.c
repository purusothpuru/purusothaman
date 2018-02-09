#include <stdio.h>
int main()
{
long long int factorial(int n)
{
    long long ans = 1;
    int i;
    for(i=1; i <= n; i++)
    ans *= i;
return ans;
}
void main()
{
    int x;
    for(x=10; x <= 21; x++)
        printf("%lld\n", factorial(x));
}
 return 0;
}
