#include <iostream>

using namespace std;

int main()
{

    //a[0] - wsch� a[1] - zach�d, a[2] - aktualna godzina, n - pomocnicza zmienna

    int a[3],n;

    for(int i=0; i<3; i++)
    {
        cin>>n;
        getchar();
        a[i]=n*100;
        cin>>n;
        a[i]+=n;
    }

    if(a[2]>=a[0]&&a[2]<a[1]) //je�eli jest pomi�dzy wschodem (lub r�wna) a zachodem
    {
        cout<<"dzien";
    }
    else if(a[2]>=a[1]||a[2]<a[0])
    {
        cout<<"noc";
    }

    return 0;
}
