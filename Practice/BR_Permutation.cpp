#include <bits/stdc++.h>

#define MAX 200010

using namespace std;

int n;
int num[MAX];
char str[MAX];
vector<int> blue, red;
int blue_len, red_len;
bool flag;

void init(){
    blue.clear();
    red.clear();
    flag = true;
}

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        init();

        scanf("%d", &n);

        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);

        getc(stdin);
        
        for(int i = 0; i < n; i++)
            scanf("%c", &str[i]);

        for(int i = 0; i < n; i++){
            if(str[i] == 'B')
                blue.push_back(num[i]);
            else
                red.push_back(num[i]);
        }

        blue_len = blue.size();
        red_len = red.size();

        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());

        for(int i = 0; i < blue_len; i++)
            if(blue[i] < i + 1)
                flag = false;

        for(int i = 0; i < red_len; i++)
            if(red[i] > n - red_len + i + 1)
                flag = false;

        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}