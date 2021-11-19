#include <bits/stdc++.h>

using namespace std;

#define MAX 1010

int n, m;
int robot[MAX][MAX];
bool vst[MAX][MAX] = {false};
priority_queue<int> room_size;

int dfs(int x, int y){
    int tmp = 1;

    vst[x][y] = true;

    if(x - 1 >= 0 && !(robot[x][y] & 8) && !vst[x - 1][y])
        tmp += dfs(x - 1, y);

    if(y + 1 < m && !(robot[x][y] & 4) && !vst[x][y + 1])
        tmp += dfs(x, y + 1);

    if(x + 1 < n && !(robot[x][y] & 2) && !vst[x + 1][y])
        tmp += dfs(x + 1, y);

    if(y - 1 >= 0 && !(robot[x][y] & 1) && !vst[x][y - 1])
        tmp += dfs(x, y - 1);

    return tmp;
}

int main(){
    scanf("%d%d", &n, &m);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &robot[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!vst[i][j])
                room_size.push(dfs(i, j));

    while(!room_size.empty()){
        int tmp = room_size.top();

        if(room_size.size() > 1)
            printf("%d ", tmp);
        else
            printf("%d \n", tmp);

        room_size.pop();
    }

    return 0;
}