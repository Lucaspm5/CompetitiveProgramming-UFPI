#include <bits/stdc++.h>

using namespace std;

int *fibonacci(int x, int *arr)
{
    *(arr + 0) = 0;
    *(arr + 1) = 1;

    for(int i = 2;i < x;i++)
        *(arr + i) = *(arr + i - 1) + *(arr + i - 2);

    return arr;
}

int main(int argc, char **argv){
    int N;

    cin >> N;

    int *arr = nullptr;

    arr = new int[N];

    int *aux = fibonacci(N, arr);

    for(int i = 0;i < N;i++)
    {
        cout << *(aux + i);

        if (i != N - 1)
            cout << " ";
    }

    cout << endl;

    delete[] arr;

    return 0;
}