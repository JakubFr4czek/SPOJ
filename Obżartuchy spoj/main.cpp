#include <iostream>

using namespace std;

int funkcja()
{
    int obzartuchy=0, ciastka=0, czas=0, suma=0, x=0;

    int doba=86400;

    cin>>obzartuchy;
    cin>>ciastka;

    for(int i=0; i<obzartuchy; i++)
    {
        cin>>czas;

        //cout<<doba/czas<<endl;
        suma+=doba/czas;

    }

    if(suma%ciastka!=0)
    {
        cout<<(suma/ciastka)+1<<endl;
        return 0;
    }
    else
    {
        cout<<suma/ciastka<<endl;
        return 0;
    }




}

int main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        funkcja();
    }



    return 0;
}
