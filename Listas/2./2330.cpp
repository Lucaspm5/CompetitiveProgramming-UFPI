#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> calls(M);

    for (int i = 0; i < M; i++)
        cin >> calls[i];

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> auxiliary;

    vector<int> count(N, 0);

    for (int i = 0; i < N; i++)
        auxiliary.push(make_pair(0, i));


    for (int i = 0; i < M; i++)
    {
        pair<int, int> aux = auxiliary.top();
        auxiliary.pop();
        count[aux.second]++;
        aux.first += calls[i];
        auxiliary.push(aux);
    }

    for (int i = 0; i < N; i++)
        cout << i + 1 << " " << count[i] << endl;


    return 0;
}