#include <bits/stdc++.h>

#define MAX 60

using namespace std;

int main(){
    int ncase;
    int n;
    set<int> num_set;
    int tmp;

    scanf("%d", &ncase);

    while(ncase--){
        num_set.clear();

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);

            while(tmp > 0){
                if(tmp <= n && num_set.count(tmp) == 0){
                    num_set.insert(tmp);
                    break;
                }

                tmp /= 2;
            }
        }

        printf(num_set.size() == n ? "Yes\n" : "No\n");
    }

    return 0;
}