#include <stdio.h>

int main(){
    int ncase;
    long long n, k;
    long long hour;

    scanf("%d", &ncase);

    while(ncase--){
        hour = 0;

        scanf("%lld%lld", &n, &k);

        n--;

        for(long long i = 1; i < k && n > 0; i *= 2){
            n -= i;
            hour++;
        }

        if(n > 0)
            hour += n / k + (n % k > 0);

        printf("%lld\n", hour);
    }

    return 0;
}