#include<stdio.h>
#include<math.h>

long long max (long long a, long long b) {
if (a > b)
return a;
else return b;
}

int main (){
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long x = max(max(max(a,b),c),d);

    if (x == a)
    printf("%lld %lld %lld", x - b, x - c, x - d);

    else if (x == b)
    printf("%lld %lld %lld", x - a, x - c, x - d);

    else if (x == c)
    printf("%lld %lld %lld", x - b, x - a, x - d);

    else
    printf("%lld %lld %lld", x - b, x - c, x - a);

    return 0;
    
}