#include <stdio.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n, m;
        scanf("%d%d\n", &n, &m);

        char s[200010];
        fgets(s, 200010, stdin);

        int p[200010] = {0};
        p[n-1] = 1;
        for(int i = 0; i < m; i++){
            int pos;
            scanf("%d", &pos);
            p[pos-1]++;
        }

        int time[26] = {0};
        int temp = 0;
        for(int i = n-1; i >= 0; i--){
            if(p[i] > 0)
                temp += p[i];
            time[s[i]-'a'] += temp;
        }

        for(int i = 0; i < 26; i++){
            if(i < 25)
                printf("%d ", time[i]);
            else
                printf("%d\n", time[i]);
        }
    }

    return 0;
}