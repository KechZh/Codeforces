#include <stdio.h>
#include <string.h>

#define MAX 1000010

int n;
char str[MAX];

int main(){
    int ncase;
    
    scanf("%d\n", &ncase);

    while(ncase--){
        scanf("%d\n", &n);

        for(int i = 0; i < n; i++)
            scanf("%c", &str[i]);

        str[n] = '\0';

        if(strstr(str, "aa"))
            printf("2\n");
        else if(strstr(str, "aba") || strstr(str, "aca"))
            printf("3\n");
        else if(strstr(str, "abca") || strstr(str, "acba"))
            printf("4\n");
        else if(strstr(str, "abbacca") || strstr(str, "accabba"))
            printf("7\n");
        else
            printf("-1\n");
    }

    return 0;
}