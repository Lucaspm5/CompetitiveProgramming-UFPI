#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const **argv)
{
    int arrSize;
    cin >> arrSize;

    for(int i = 0; i < arrSize; i++)
    {
        string simbol;

        cin >> simbol;

        stack<char> aux;

        int count = 0;

        for(int j = 0; j < simbol.size(); j++)
        {
            char auxiliary = simbol[j];

            if(auxiliary == '<')
            {
                aux.push(auxiliary);
            }
            else if(auxiliary == '>' && !aux.empty())
            {
                aux.pop();
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}