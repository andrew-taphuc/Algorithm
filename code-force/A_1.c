#include<stdio.h>
#include<math.h>
int main() {
    int n = 0;
    int m = 0;
    int a = 0;
    scanf("%d%d%d", &n, &m, &a);
    long long x = (m + a - 1) / a;
    long long y = (n + a - 1) / a;

    printf("%lld", x * y);
    return 0;
}