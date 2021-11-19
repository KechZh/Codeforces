#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            if(i < n)
                printf("%d ", i+1);
            else
                printf("1\n");
        }
    }

    return 0;
}