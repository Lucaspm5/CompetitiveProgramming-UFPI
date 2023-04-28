#include <bits/stdc++.h>

using namespace std;

int soma(int x, int y)
{
    return x + y;
}

int main(int argc, char **argv)
{
    int number1, number2;

    cin >> number1 >> number2;

    cout << "X = " << soma(number1, number2) << endl;

    return 0;
}