#include <stdio.h>
#include <stdbool.h>

#define MAX 100010

int n;
int a[MAX];
bool n_flag, all_flag;

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        all_flag = true;

        scanf("%d", &n);

        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for(int i = 0; i < n; i++){
            n_flag = false;

            for(int j = 0; j <= i; j++)
                if(a[i] % (i + 2 - j)){
                    n_flag = true;

                    break;
                }

            if(!n_flag){
                all_flag = false;

                break;
            }
        }

        if(all_flag)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}