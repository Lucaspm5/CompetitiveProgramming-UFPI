#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv){
    int L, D;//L = comprimento da estrada D = distancia entre os pedagios
    int K, P;//K =  custo por quilômetro percorrido P = valor de cada pedágio
    int Custo_KM = 0;
    int Custo_total = 0;

    cin >> L >> D;
    cin >> K >> P;

    Custo_KM = K * L;
    Custo_total = Custo_KM + (L / D) * P;

    cout << Custo_total << endl;

    return 0;
}