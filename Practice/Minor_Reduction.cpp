#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncase;
    string str;
    int mark;

    cin >> ncase;

    while(ncase--){
        mark = 0;

        cin >> str;

        for(int i = 0; i < str.size() - 1; i++)
            if(str[i] - '0' + str[i + 1] - '0' >= 10)
                mark = i;

        cout << str.replace(mark, 2, to_string(str[mark] - '0' + str[mark + 1] - '0')) << endl;
    }

    return 0;
}