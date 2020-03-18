#include <bits/stdc++.h>

using namespace std;

int simplify(int hp, int atk1, int atk2){
    int temp = hp % (atk1 + atk2);
    if(temp != 0)
        return temp;
    else
        return (atk1 + atk2);
}

int count(int hp, int atk){
    int temp = hp % atk;
    if(temp == 0)
        return (hp / atk);
    else
        return (hp / atk) + 1;
}

int main(){
    int num, atk1, atk2, total_skip;
    scanf("%d%d%d%d", &num, &atk1, &atk2, &total_skip);

    int skip[200010];  
    for(int i = 0; i < num; i++){
        int hp;
        scanf("%d", &hp);

        hp = simplify(hp, atk1, atk2);
        hp -= atk1;
        if(hp <= 0)
            skip[i] = 0;
        else
            skip[i] = count(hp, atk1);
    }

    sort(skip, skip + num);

    int ans = 0;
    for(int i = 0; i < num; i++){
        total_skip -= skip[i];

        if(total_skip >= 0)
            ans++;
        else
            break;
    }

    printf("%d\n", ans);

    return 0;
}