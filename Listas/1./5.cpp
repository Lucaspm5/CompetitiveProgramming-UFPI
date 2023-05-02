#include <bits/stdc++.h>

using namespace std;

int valida_tamanho(int x, int y, int *ptr)
{
    int maior;

    if (x > y)
    {
        maior = x;
        *ptr = y;
    }
    else if (x < y)
    {
        maior = y;
        *ptr = x;
    }
    return maior;
}

int main(int argc, char **argv)
{
    int A, B, auxiliary;
    int soma = 0;

    cin >> A >> B;

    int aux = valida_tamanho(A, B, &auxiliary);

    if (true)
    {
        for (int i = auxiliary + 1; i < aux; i++)
        {
            if (i % 2 != 0)
            {
                soma += i;
            }
        }
    }

    if (A == B)
        cout << "0" << endl;
    else
        cout << soma << endl;

    return 0;
}
