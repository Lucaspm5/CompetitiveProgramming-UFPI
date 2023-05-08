#include <bits/stdc++.h>

using namespace std;

typedef struct{
    char nome_do_produto[10000];
    char produto_que_eu_quero[10000];
    double preco;
    int qnt;
}lojinha;

int main()
{
    int cases;
    int produtos_disponiveis;
    int qnt_de_produtos;
    double soma = 0;

    cin >> cases;

    vector<lojinha> pessoa;

    while (cases--)
    {
        cin >> produtos_disponiveis;

        pessoa.resize(produtos_disponiveis);

        soma = 0;

        for (int j = 0;j < produtos_disponiveis;j++)
        {
            cin >> pessoa[j].nome_do_produto >> pessoa[j].preco;
        }

        cin >> qnt_de_produtos;

        for (int k = 0;k < qnt_de_produtos;k++)
        {
            cin >> pessoa[k].produto_que_eu_quero >> pessoa[k].qnt;
        }

        for(int j = 0;j < produtos_disponiveis;j++)
        {
            for(int k = 0;k < qnt_de_produtos;k++)
            {
                if(strcmp(pessoa[j].nome_do_produto, pessoa[k].produto_que_eu_quero) == 0)
                {
                    soma += pessoa[j].preco * pessoa[k].qnt;
                }
            }
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << soma << endl;
    }
    return 0;
}