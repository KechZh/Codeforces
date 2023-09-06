#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d", &n);

        int op[200010];
        int last;
        for(int i = 1; i <= n; i++)
            op[i] = -1;

        for(int i = 1; i <= n; i++){
            int a;
            scanf("%d", &a);

            if(i == 1)
                op[a] = 0;
            else if(a != last){
                op[last]++;
                if(op[a] == -1)
                    op[a] = 1;
            }

            last = a;
        }

        int min = 0xfffffff;
        for(int i = 1; i <= n; i++)
            if(op[i] >= 0 && op[i] < min){
                min = op[i];
            }
        
        printf("%d\n", min);
    }

    return 0;
}