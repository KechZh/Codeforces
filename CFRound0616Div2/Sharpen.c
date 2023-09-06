#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int num[300010] = {0};
        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);

        int sharpen = 1;
        for(int i = 0; i < n; i++){
            if(i < n/2){
                if(num[i] < i){
                    sharpen = 0;
                    break;
                }
            }
            else{
                if(num[i] < n-1-i){
                    sharpen = 0;
                    break;
                }
            }
        }
        if(n % 2 == 0){
            if(num[n/2-1] < n/2 && num[n/2] < n/2)
                sharpen = 0;
        }

        if(sharpen)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}