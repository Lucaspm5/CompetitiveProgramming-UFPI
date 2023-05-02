#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv){
    int N;
    int auxiliary = 0;

    cin >> N;

    for(int i = N;auxiliary < 6;i+=2)
    {
        if(i % 2 == 0)
        {
            ++i;
        }
        printf("%d\n",i);

        auxiliary++;
    }

    return 0;
}