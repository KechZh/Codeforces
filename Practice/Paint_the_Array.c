#include <stdio.h>
#include <stdbool.h>

#define MAX 110

long long gcd(long long a, long long b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){
    int ncase;
    int n;
    long long num[MAX];
    long long d1, d2;
    bool flag1, flag2;

    scanf("%d", &ncase);

    while(ncase--){
        d1 = -1;
        d2 = -1;
        flag1 = true;
        flag2 = true;

        scanf("%d", &n);

        for(int i = 0; i < n; i++)
            scanf("%lld", &num[i]);

        for(int i = 0; i < n; i += 2){
            if(d1 == -1)
                d1 = num[i];
            else
                d1 = gcd(d1, num[i]);
        }

        for(int i = 1; i < n; i += 2)
            if(num[i] % d1 == 0){
                flag1 = false;
            }

        for(int i = 1; i < n; i += 2){
            if(d2 == -1)
                d2 = num[i];
            else
                d2 = gcd(d2, num[i]);
        }

        for(int i = 0; i < n; i += 2)
            if(num[i] % d2 == 0){
                flag2 = false;
            }

        if(flag1)
            printf("%lld\n", d1);
        else if(flag2)
            printf("%lld\n", d2);
        else
            printf("0\n");
    }

    return 0;
}