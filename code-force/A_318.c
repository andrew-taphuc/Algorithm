
#include<stdio.h>
int main() {
    long long n,k;
    scanf("%lld%lld", &n, &k);
    if (k <= (n + 1) / 2)
    printf("%lld", 2 * k - 1);
    else
    printf("%lld", 2 * (k - (n + 1) / 2));
}