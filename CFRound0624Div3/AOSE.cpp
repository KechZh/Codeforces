#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int a, b;
        scanf("%d%d", &a, &b);

        if(a == b)
            printf("0\n");
        else if(a < b){
            int diff = b - a;

            if(diff & 1)
                printf("1\n");
            else
                printf("2\n");
        }
        else{
            int diff = a - b;

            if(diff & 1)
                printf("2\n");
            else
                printf("1\n");
        }
    }

    return 0;
}