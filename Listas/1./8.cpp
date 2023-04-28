#include <bits/stdc++.h>

using namespace std;

bool valida_primo(int x)
{
    for(int i = 2;i < x;i++){
        if(x % i == 0) return false;
    }

    return true;
}

int main(int argc, char **argv){

    int cases;
    int N;

    cin >> cases;

    while(cases--){
        cin >> N;

        if(valida_primo(N)) cout << N << " eh primo" << endl;
        else cout << N << " nao eh primo" << endl;
    }
    return 0;
}