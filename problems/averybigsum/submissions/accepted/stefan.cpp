//Author: Stefan Toman

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int main() {
    int n;
    ll s=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        ll t;
        scanf("%lld", &t);
        s += t;
    }
    printf("%lld\n", s);
    return 0;
}