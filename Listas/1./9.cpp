#include <bits/stdc++.h>

using namespace std;

int main(int argc, char ** argv){
    int N[10];

    for(int i = 0;i < 10;i++){
        cin >> N[i];

        if(N[i] <= 0)
            N[i] = 1;

        printf("X[%d] = %d\n",i,N[i]);
    }
    return 0;
}