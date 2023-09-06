#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int food;
        scanf("%d", &food);
        
        int ans = food;
        while(food / 10 > 0){
            ans += food / 10;
            food = food / 10 + food % 10;
        }

        printf("%d\n", ans);
    }

    return 0;
}