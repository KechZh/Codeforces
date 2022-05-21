#include <bits/stdc++.h>

using namespace std;

#define MAX 200010

int n;
int a[MAX];
long long sum, avg;
long long p;
int l, r;

long long cnt1, cnt2;
int tmp;

void init(){
    sum = 0;
    p = 0;
}

int main(){
    int ncase;

    scanf("%d", &ncase);

    while(ncase--){
        init();

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);

            a[i] = tmp;
            sum += tmp;
        }

        sort(a, a + n);

        if(sum * 2 % n == 0){
            avg = sum * 2 / n;

            l = 0;
            r = n - 1;

            while(l <= r){
                cnt1 = cnt2 = 0;
                tmp = a[l];

                if(tmp != avg - tmp){
                    while(a[l] == tmp && l <= r){
                        cnt1++;
                        l++;
                    }

                    while(a[r] >= avg - tmp && l <= r){
                        cnt2 += (a[r] == avg - tmp);
                        r--;
                    }

                    p += cnt1 * cnt2;
                }
                else{
                    while(a[l] == tmp && l <= r){
                        cnt1++;
                        l++;
                    }

                    p += cnt1 * (cnt1 - 1) / 2;
                }
            }
        }
        
        printf("%lld\n", p);
    }

    return 0;
}