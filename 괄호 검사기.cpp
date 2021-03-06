#include<cstdio>
#include<stack>
using namespace std;

int main()
{
    char str[100001];
    stack<char> s;
    scanf("%s",str);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                printf("0");
                return 0;
            }
            else if (s.top() != '(' && str[i] == ')')
            {
                printf("0");
                return 0;
            }
            else if (s.top() != '{' && str[i] == '}')
            {
                printf("0");
                return 0;
            }
            else if (s.top() != '[' && str[i] == ']')
            {
                printf("0");
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty())
        printf("1");
    else
        printf("0");
    return 0;
}
