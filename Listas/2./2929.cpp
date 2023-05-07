#include <cstdio>
#include <stack>

int main()
{
    int cases;
    int N;

    std::stack <int> POP;
    std::stack <int> minStack;

    char str[5];

    scanf("%d", &cases);

    while(cases--)
    {
        scanf("%s", str);
        if(str[1] == 'U') 
        {
            scanf("%d", &N);
            POP.push(N);
            if(minStack.empty() || N <= minStack.top()) { minStack.push(N); }
                
        }else if(str[1] == 'O') 
        {
            if(!POP.empty()) 
            {
                if(POP.top() == minStack.top()) { minStack.pop(); }
                    
                POP.pop();
            } else 
                printf("EMPTY\n");
            
        }else if(str[1] == 'I') 
        {
            if(!POP.empty()) printf("%d\n", minStack.top());
                
            else printf("EMPTY\n");  
        }
    }    
    return 0;
}