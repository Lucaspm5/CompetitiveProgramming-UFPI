#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> aux;

    string s;

    while(cin >> s)
    {
        aux.insert(s);
    }

    cout << aux.size() << endl;

    return 0;
}
