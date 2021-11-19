#include <stdio.h>

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        int l, r;
        int a;
        
        scanf("%d%d", &l, &r);
        a = r + 1;

        if(l % a >= (double)a / 2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}