#include <stdio.h>

struct coordinate{
    int x;
    int y;
};

int main(){
    int ncase;
    scanf("%d", &ncase);

    while(ncase--){
        int n;
        scanf("%d\n", &n);

        char path[200010];
        scanf("%s", path);

        int start = -1;
        int end = -1;

        struct coordinate coo[200010];
        coo[0].x = coo[0].y = 0;
        for(int i = 1; i <= n; i++){
            switch (path[i-1]){
            case 'L':
                coo[i].x = coo[i-1].x - 1;
                coo[i].y = coo[i-1].y;
                break;
            case 'R':
                coo[i].x = coo[i-1].x + 1;
                coo[i].y = coo[i-1].y;
                break;
            case 'U':
                coo[i].x = coo[i-1].x;
                coo[i].y = coo[i-1].y + 1;
                break;
            case 'D':
                coo[i].x = coo[i-1].x;
                coo[i].y = coo[i-1].y - 1;
                break;
            }

            for(int j = 0; j < i; j++)
                if(coo[j].x == coo[i].x && coo[j].y == coo[i].y){
                    if(start == -1 && end == -1){
                        start = j + 1;
                        end = i;
                    }
                    else if(i - (j + 1) < end - start){
                        start = j + 1;
                        end = i;
                    }
                }
        }

        if(start != -1 && end != -1)
            printf("%d %d\n", start, end);
        else
            printf("-1\n");
    }

    return 0;
}