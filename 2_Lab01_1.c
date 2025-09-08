/*#include <stdio.h>
int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if (c <= b) {
        printf("-1\n");
    }
    else {
        long long i;
        i = a / (c - b) + 1;
        printf("%lld\n", i);
    }

    return 0;
}*/


/* (c-b)i > a
i > a/(c-b) */