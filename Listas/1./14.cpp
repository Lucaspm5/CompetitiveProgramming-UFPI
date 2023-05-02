#include <bits/stdc++.h>

typedef struct{
    char nome[50];
    double dificuldade;
    double notas[7];
}comp;

int main(int argc, char const **argv){

    int cases;

    scanf("%d", &cases);

    double result = 0.0;

    comp auxiliary[cases];

    for(int i = 0; i < cases;i++)
    {   
        result = 0.0;
        double maior = 0.0, menor = 11.0;

        scanf("%s", auxiliary[i].nome);
        scanf("%lf", &auxiliary[i].dificuldade);

        for(int j = 0;j < 7;j++)
            scanf("%lf", &auxiliary[i].notas[j]);

        for(int j = 0;j < 7;j++)
        {
            if(auxiliary[i].notas[j] > maior) {maior = auxiliary[i].notas[j];}

            if(auxiliary[i].notas[j] < menor) {menor = auxiliary[i].notas[j];}
        }    

        double sum = 0.0;

        for(int j = 0; j < 7; j++)
        {
            if(auxiliary[i].notas[j] != maior && auxiliary[i].notas[j] != menor)
            {
                sum += auxiliary[i].notas[j];
            }
        }
        
        result = auxiliary[i].dificuldade * sum;

        printf("%s %.2lf\n",auxiliary[i].nome,result);
    }
    return 0;
}
