#include <stdio.h>

int h, p;
long long remain;
long long turn;

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        scanf("%d%d", &h, &p);

        remain = ((long long)1 << h) - 1;
        turn = 0;
        
        for(int i = 0; (long long)1 << i < p && (long long)1 << i < remain; i++){
            remain -= (long long)1 << i;
            turn++;
        }

        turn += (remain / p) + (remain % p > 0);

        printf("%lld\n", turn);
    }

    return 0;
}