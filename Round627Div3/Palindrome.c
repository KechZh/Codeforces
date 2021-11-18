#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int pos[5010];
        for(int i = 0; i < 5010; i++)
            pos[i] = -1;

        int pal = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);

            if(pos[a] == -1)
                pos[a] = i;
            else{
                int gap = i - pos[a];
                if(gap > 1)
                    pal = 1;
            }
        }

        if(pal)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}