#include <iostream>

using namespace std;

void czy_Dodatnia(int a){

    if(a>0)
        cout<<"dodatnia\n";
    else if(a<0)
        cout<<"ujemna\n";
    else if(a==0)
        cout<<"zero\n";

    if(cin>>a)
        czy_Dodatnia(a);

}

int main()
{
    int a;

    if(cin>>a)
        czy_Dodatnia(a);

    return 0;
}
