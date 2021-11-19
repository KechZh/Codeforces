#include <stdio.h>

#define MOD 1000000007

int n, k;
unsigned long long ans;
unsigned long long now;

void init(){
    ans = 0;
    now = 1;
}

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        init();

        scanf("%d%d", &n, &k);

        while(k > 0){
            ans = (ans + now * (k & 1)) % MOD;

            now = (now * n) % MOD;
            k >>= 1;
        }

        printf("%llu\n", ans);
    }

    return 0;
}