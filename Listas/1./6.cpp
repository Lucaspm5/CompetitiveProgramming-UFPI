#include <bits/stdc++.h>

using namespace std;

int main(int main, char **argv)
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int square = i * i;
        int cube = square * i;

        cout << i << " " << square << " " << cube << endl;
        cout << i << " " << square + 1 << " " << cube + 1 << endl;
    }

    return 0;
}