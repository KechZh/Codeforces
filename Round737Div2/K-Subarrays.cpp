#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n, k;
        scanf("%d%d", &n, &k);

        pair<int, int> a[100010];
        for(int i = 0; i < n; i++){
            int tmp;
            scanf("%d", &tmp);

            a[i].first = tmp;
            a[i].second = i;
        }

        sort(a, a + n, compare);

        for(int i = 0; i < n - 1; i++)
            if(a[i].second + 1 != a[i+1].second)
                k--;

        if(k > 0)
            printf("Yes\n");
        else
            printf("No\n");        
    }

    return 0;
}