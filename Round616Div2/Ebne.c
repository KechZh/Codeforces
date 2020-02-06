#include <stdio.h>
#include <string.h>

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int digit;
        char s[3010];
        scanf("%d\n", &digit);
        fgets(s, 3010, stdin);
        s[digit] = 0;

        for(int i = digit - 1; i >= 0; i--){
            if((s[i] - '0') % 2 == 0){
                s[i] = 0;
                digit--;
            }
            else
                break;
        }

        int sum = 0;
        for(int i = 0; i < digit; i++)
            sum += s[i] - '0';

        if(sum % 2 != 0){
            for(int i = digit - 2; i >= 0; i--)
                if((s[i] - '0') % 2 != 0){
                    sum -= s[i] - '0';
                    digit--;

                    char temp[3010];
                    strcpy(temp, s + i + 1);
                    s[i] = 0;
                    strcat(s, temp);
                    break;
                }
        }

        if(sum % 2 == 0 && (s[digit - 1] - '0') % 2 != 0)
            printf("%s\n", s);
        else
            printf("-1\n");
    }

    return 0;
}