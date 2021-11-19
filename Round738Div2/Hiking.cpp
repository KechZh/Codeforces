#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        int a[10010];
        int mid_point;
        vector<int> path;

        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(i > 0 && a[i-1] == 0 && a[i] == 1)
                mid_point = i;
        }

        if(a[0] == 1){
            path.push_back(n+1);
            for(int i = 0; i < n; i++)
                path.push_back(i+1);
        }
        else if(a[n-1] == 0){
            for(int i = 0; i < n; i++)
                path.push_back(i+1);
            path.push_back(n+1);
        }
        else{
            for(int i = 0; i < mid_point; i++)
                path.push_back(i+1);
            path.push_back(n+1);
            for(int i = mid_point; i < n; i++)
                path.push_back(i+1);
        }

        for(int i = 0; i < path.size(); i++){
            if(i < path.size()-1)
                printf("%d ", path[i]);
            else
                printf("%d\n", path[i]);
        }
    }

    return 0;
}