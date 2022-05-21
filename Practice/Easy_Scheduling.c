#include <stdio.h>

int h, p;
long long ready;
long long not_ready;

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        init();

        scanf("%d%d", &h, &p);

        ready = 1;
        not_ready = 1 << h - 1;

        while(not_ready > 0){
            
        }
    }

    return 0;
}