#include <iostream>

using namespace std;

bool Czy_pierwsza(int a, int b){

    if(a<b)
        return false;

    if(a==2)
        return true;

    if(b>=a)
        return true;

    if(a%b==0)
        return false;
    else if(a%b!=0){
         return Czy_pierwsza(a,++b);
    }

}

int main()
{
    int a;

    cin>>a;

    if(Czy_pierwsza(a,2))
        cout<<"TAK";
    else
        cout<<"NIE";


    return 0;
}
