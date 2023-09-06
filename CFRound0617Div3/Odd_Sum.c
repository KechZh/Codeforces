#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int odd = 0;
        int even = 0;
        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            if(num % 2 != 0)
                odd = 1;
            else
                even = 1;
        }

        if(odd && even)
            printf("YES\n");
        else if(odd && n % 2 != 0)
            printf("YES\n");
        else
            printf("No\n");
    }

    return 0;
}