#include <bits/stdc++.h>

#define MAX 50

using namespace std;

int n;
vector<int> num;
int min_val;
int k;

void init(){
    num.clear();

    min_val = 1000010;
    k = -1;
}

int gcd(int a, int b){
    int tmp;

    while(b > 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

int main(){
    int ncase;
    int tmp;

    scanf("%d", &ncase);

    while(ncase--){
        init();

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);

            num.push_back(tmp);
            min_val = min(tmp, min_val);
        }

        for(int i = 0; i < n; i++){
            tmp = num[i] - min_val;

            if(tmp > 0){
                if(k == -1)
                    k = tmp;
                else
                    k = gcd(k, tmp);
            }
        }

        printf("%d\n", k);
    }

    return 0;
}