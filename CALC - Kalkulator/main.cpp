#include <iostream>

using namespace std;

int main()
{

    char a;
    int b,c;

    while(cin>>a>>b>>c)
    {

        switch(a)
        {
            case '+':
            cout<<b+c<<endl;
            break;

            case '-':
            cout<<b-c<<endl;
            break;

            case '*':
            cout<<b*c<<endl;
            break;

            case '/':
            cout<<b/c<<endl;
            break;

            case '%':
            cout<<b%c<<endl;;
            break;
        }

    }

    return 0;
}
