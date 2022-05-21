#include <stdio.h>

int main(){
    int ncase;
    long long n, m, k;
    int min_dia;

    scanf("%d", &ncase);

    while(ncase--){
        scanf("%lld%lld%lld", &n, &m, &k);

        if(n == 1){
            if(m == 0)
                min_dia = 0;
            else
                min_dia = 1000000010;
        }
        else{
            if(m == n * (n - 1) / 2)
                min_dia = 1;
            else if(m < n * (n - 1) / 2 && m >= n - 1)
                min_dia = 2;
            else
                min_dia = 1000000010;
        }

        if(min_dia < k - 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}