#include <iostream>

using namespace std;

int main()
{
    int stos[10];
    int pozycjaStos=-1;

    char a; //a - plus/minus
    int b;  //b licbza, gdy plus

    while(cin>>a)
    {
        if(a=='+')
        {
            cin>>b;
            if(pozycjaStos<0)
                pozycjaStos==0;
            if(pozycjaStos<9){
                pozycjaStos++;
                stos[pozycjaStos]=b; //cout<<"Pozycja stos:    "<<pozycjaStos<<endl;
                cout<<":)"<<endl;

            }
            else
                cout<<":("<<endl;

        }
        else if(a=='-')
        {
            if(pozycjaStos>9)
                pozycjaStos=9;
            if(pozycjaStos>=0){
                cout<<stos[pozycjaStos]<<endl; //cout<<"Pozycja stos:    "<<pozycjaStos<<endl;
                pozycjaStos--;
            }
            else
                cout<<":("<<endl;
        }
    }



    return 0;
}
