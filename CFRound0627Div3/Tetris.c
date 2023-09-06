#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int A[110];
        int max = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
            max = A[i] > max ? A[i] : max;
        }

        int clear = 1;
        for(int i = 0; i < n; i++)
            if((max - A[i]) % 2 != 0){
                clear = 0;
                break;
            }

        if(clear)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}