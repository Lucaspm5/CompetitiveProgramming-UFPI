#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int entrada;

    scanf("%d",&entrada);

    int prod, quant;
    float soma = 0;

    while(entrada--)
    {
        scanf("%d %d",&prod,&quant);

        if(prod == 1001)
        {
            soma += 1.50 * quant;
		}
		else if (prod == 1002)
		{
			soma += 2.50 * quant;
		}
		else if (prod == 1003)
		{
			soma += 3.50 * quant;
		}
		else if (prod == 1004)
		{
			soma += 4.50 * quant;
		}
		else if (prod == 1005)
		{
			soma += 5.50 * quant;
		}
    }

    printf("%.2f\n", soma);
    
    return 0;
}