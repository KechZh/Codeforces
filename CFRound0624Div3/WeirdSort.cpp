#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n, m;
        scanf("%d%d", &n, &m);

        int a[110];
        bool p[110] = {false};

        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for(int i = 0; i < m; i++){
            int pos;
            scanf("%d", &pos);
            p[pos-1] = true;
        }

        for(int i = 0; i < n-1; i++)
            for(int j = 0; j < n-1; j++)
                if(p[j] == true && a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }

        bool sorted = true;
        for(int i = 0; i < n-1; i++)
            if(a[i] > a[i+1]){
                sorted = false;
                break;
            }

        if(sorted)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}