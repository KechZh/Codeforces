#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b){
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int ncase;
    int n, a, b;
    vector<int> seq;

    int l, r;

    scanf("%d", &ncase);

    while(ncase--){
        seq.clear();

        scanf("%d%d%d", &n, &a, &b);

        if(abs(a - b) <= 1 && a + b <= n - 2){
            for(int i = 1; i <= n; i++)
                seq.push_back(i);

            if(a < b){
                l = 0;
                r = 2 * b;
            }
            else if(a > b){
                l = n - 2 * a;
                r = n;
            }
            else{
                l = 1;
                r = 1 + 2 * a;
            }

            for(int i = l; i < r; i += 2)
                swap(&seq[i], &seq[i + 1]);
        }
        else
            seq.push_back(-1);

        for(int i = 0; i < seq.size(); i++){
            if(i < seq.size() - 1)
                printf("%d ", seq[i]);
            else
                printf("%d\n", seq[i]);
        }
    }

    return 0;
}