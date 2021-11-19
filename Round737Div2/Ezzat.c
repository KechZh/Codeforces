#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        double max = -1000000010;
        long long sum = 0;

        for(int i = 0; i < n; i++){
            int tmp;
            scanf("%d", &tmp);

            sum += tmp;

            if(tmp > max)
                max = tmp;
        }

        printf("%.9lf\n", max + (sum - max) / (n - 1));
    }

    return 0;
}