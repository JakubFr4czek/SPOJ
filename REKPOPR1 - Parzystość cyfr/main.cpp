#include <iostream>

using namespace std;

void czy_Parzysta(string a, int pozycja){

    if((a[pozycja]-'0')%2==0)
        cout<<"p";
    else if((a[pozycja]-'0')!=0)
        cout<<"n";

    if(pozycja<a.length()-1)
        czy_Parzysta(a,++pozycja);
}

int main()
{
    string a;

    cin>>a;

    czy_Parzysta(a,0);

    return 0;
}
