#include <bits/stdc++.h>

using namespace std;

bool verificar_expression(string str)
{
    stack <char> auxiliary;
    char aux;

    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') { aux = str[i];auxiliary.push(aux); }
             
        else if(str[i] == ')' || str[i] == ']' || str[i] == '}') 
        {
            if(auxiliary.empty()) return false;

            char topo = auxiliary.top();

            auxiliary.pop();
    
            if ((str[i] == ')' && topo != '(') ||
                (str[i] == ']' && topo != '[') ||
                (str[i] == '}' && topo != '{')) return false;
        }
    }
    return auxiliary.empty();
}

int main()
{
    string expressao;
    int cases;

    cin >> cases;

    while(cases--)
    {
        cin >> expressao;

        int true_false = verificar_expression(expressao);

        if(true_false)
            cout << "S" << endl;
        else    cout << "N" << endl;
    }
    
    return 0;
}
