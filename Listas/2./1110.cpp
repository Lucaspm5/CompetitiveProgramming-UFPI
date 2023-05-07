#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int N;

    while(cin >> N && N != 0) 
    {
        queue<int> cartas;

        if(N <= 50)
        {
            for (int i = 1; i <= N; i++)
                cartas.push(i);

            cout << "Discarded cards:";

            while(cartas.size() > 1) 
            {
                cout << " " << cartas.front();

                cartas.pop();
                cartas.push(cartas.front());
                cartas.pop();

                if(cartas.size() > 1) cout << ","; 
            }

            cout << endl;
            cout << "Remaining card: " << cartas.front() << endl;
        }else break;
    }

    return 0;
}
