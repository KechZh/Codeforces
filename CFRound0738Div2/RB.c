#include <stdio.h>

int main(){
    int ncase;
    scanf("%d\n", &ncase);

    while(ncase--){
        int n;
        scanf("%d\n", &n);

        char s[110] = {0};
        for(int i = 0; i < n; i++)
            scanf("%c", &s[i]);

        for(int i = 1; i < n; i++)
            if(s[i] == '?'){
                if(s[i-1] == 'R')
                    s[i] = 'B';
                else if(s[i-1] == 'B')
                    s[i] = 'R';
            }

        for(int i = n-2; i >= 0; i--)
            if(s[i] == '?'){
                if(s[i+1] == 'R')
                    s[i] = 'B';
                else if(s[i+1] == 'B')
                    s[i] = 'R';
            }

        for(int i = 0; i < n; i++){
            if(s[i] == '?')
                s[i] = (i % 2 == 0) ? 'R' : 'B';
        }

        printf("%s\n", s);
    }

    return 0;
}