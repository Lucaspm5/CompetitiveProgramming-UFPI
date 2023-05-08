#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        stack<int> s;
        queue<int> q;

        priority_queue<int> pq;

        bool pilha = true, fila = true, auxiliary = true;

        for (int i = 0; i < N; i++)
        {
            int valid, x;

            cin >> valid >> x;

            if (valid == 1) {s.push(x);q.push(x);pq.push(x);}

            else
            {
                if (s.empty() || s.top() != x) pilha = false;
                if (q.empty() || q.front() != x) fila = false;
                if (pq.empty() || pq.top() != x) auxiliary = false;
                if (!s.empty()) s.pop();
                if (!q.empty()) q.pop();
                if (!pq.empty()) pq.pop();
            }
        }
        if (pilha && !fila && !auxiliary) cout << "stack" << endl;
        else if (!pilha && fila && !auxiliary) cout << "queue" << endl;
        else if (!pilha && !fila && auxiliary) cout << "priority queue" << endl;
        else if (!pilha && !fila && !auxiliary) cout << "impossible" << endl;

        else cout << "not sure" << endl;
    }
    return 0;
}
