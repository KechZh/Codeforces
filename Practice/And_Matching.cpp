#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    int n, k;

    scanf("%d", &ncase);

    while(ncase--){
        scanf("%d%d", &n, &k);

        if(k < n - 1)
            for(int i = 0; i < n / 2; i++){
                if(i == 0)
                    printf("%d %d\n", k, n - 1 - i);
                else if(i == k || i == n - 1 - k)
                    printf("%d %d\n", 0, n - 1 - k);
                else
                    printf("%d %d\n", i, n - 1 - i);
            }
        else if(n > 4)
            for(int i = 0; i < n / 2; i++){
                if(i == 0)
                    printf("%d %d\n", n - 2, n - 1);
                else if(i == 1)
                    printf("%d %d\n", 1, 3);
                else if(i == 3)
                    printf("%d %d\n", 0, n - 1 - i);
                else
                    printf("%d %d\n", i, n - 1 - i);
            }
        else
            printf("-1\n");
    }

    return 0;
}