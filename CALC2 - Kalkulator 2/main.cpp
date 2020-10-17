#include <iostream>

using namespace std;

int main()
{

    char a;
    int b,c,mem[10];


    while(cin>>a>>b>>c)
    {
        switch(a)
        {
            case 'z':
            mem[b]=c;
            break;

            case '+':
            cout<<mem[b]+mem[c]<<endl;
            break;

            case '-':
            cout<<mem[b]-mem[c]<<endl;
            break;

            case '*':
            cout<<mem[b]*mem[c]<<endl;
            break;

            case '/':
            cout<<mem[b]/mem[c]<<endl;
            break;

            case '%':
            cout<<mem[b]%mem[c]<<endl;
            break;
        }

    }

    return 0;
}
