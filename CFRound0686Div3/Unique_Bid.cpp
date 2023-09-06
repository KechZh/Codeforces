#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int num[200010] = {0};
        for(int i = 1; i <= n; i++){
            int a;
            scanf("%d", &a);

            if(num[a] == 0)
                num[a] = i;
            else
                num[a] = -1;
        }

        int index = -1;
        for(int i = 1; i <= n; i++)
            if(num[i] > 0){
                index = num[i];
                break;
            }
        
        printf("%d\n", index);
    }

    return 0;
}