#include <stdio.h>
#include <stdlib.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int A[110], B[110];
        for(int i = 0; i < n; i++)
            scanf("%d", &A[i]);

        for(int i = 0; i < n; i++)
            scanf("%d", &B[i]);

        int de[110], in[110];
        int cnt_d = 0, cnt_i = 0;
        for(int i = 0; i < n; i++){
            int diff = A[i] - B[i];

            if(diff > 0)
                for(int j = 0; j < abs(diff); j++)
                    de[cnt_d++] = i + 1;
            else if(diff < 0)
                for(int j = 0; j < abs(diff); j++)
                    in[cnt_i++] = i + 1;
        }

        if(cnt_d == cnt_i){
            printf("%d\n", cnt_d);

            for(int i = 0; i < cnt_d; i++)
                printf("%d %d\n", de[i], in[i]);
        }
        else
            printf("-1\n");
    }

    return 0;
}