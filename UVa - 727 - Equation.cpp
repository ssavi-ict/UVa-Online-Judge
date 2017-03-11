#include<bits/stdc++.h>

using namespace std;

bool isoperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return true;
    }
    return false;
}

int priority(char op1 , char op2)
{
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) { return -1; }
    else if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/')) { return 1; }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    int space = 0;
    while(t--)
    {
        if(space>0)
            printf("\n");
        space = 1;
        char c[4];
        char infix[55]="";string postfix="";
        stack<char>ops;
        while(gets(c) && c[0]!='\0')
        {
            strcat(infix,c);
        }
        char *ptr = infix;
        while(*ptr!='\0')
        {
            if(*ptr>='0' && *ptr<='9') { postfix = postfix + *ptr; }

            else if(isoperator(*ptr))
            {
                while(!ops.empty() && ops.top()!='(' && priority(ops.top(),*ptr)<=0)
                  {
                      postfix = postfix + ops.top();
                      ops.pop();
                  }
                ops.push(*ptr);
            }
            else if(*ptr=='(')  { ops.push(*ptr);  }
            else if(*ptr==')')
            {
                while(!ops.empty())
                {
                    if(ops.top()=='(') { ops.pop(); break;}
                    postfix = postfix + ops.top();
                    ops.pop();
                }
            }
            ptr++;
        }
        while(!ops.empty())
        {
            postfix = postfix + ops.top();
            ops.pop();
        }
        cout<<postfix<<endl;
    }
    return 0;
}
