#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int aux,menor,n,p = 0;

	cin >> n;

	int array[n];

	for(aux = 0;aux < n;aux++)
	{
		cin >> array[aux];
	}

    menor = array[0];

	for(aux = 0;aux < n;aux++)
	{
		if(menor > array[aux])
		{
			menor = array[aux];
			p = aux;
		}
	}
	cout << "Menor valor: " << menor << endl<< "Posicao: " << p << endl;
    
    return 0;
}