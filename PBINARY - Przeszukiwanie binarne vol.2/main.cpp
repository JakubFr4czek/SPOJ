#include <iostream>

int wyszukaj(int,int,int);

int *tab;

int main()
{
    int n;
    std::cin>>n;
    tab = new int[n];

    int a;

    for(int i=0; i<n; i++){
        std::cin>>a;
        tab[i]=a;
    }

    int zapytania;
    std::cin>>zapytania;

    int liczba;

    for(int i=0; i<zapytania; i++){
        std::cin>>liczba;

        if(wyszukaj(0,n,liczba)==-1)
            std::cout<<"NIE\n";
        else
            std::cout<<"TAK\n";

    }



    return 0;
}

int wyszukaj(int l, int p, int liczba){

    int srodek = (l+p)/2;


    if(l>p)
        return -1;

    if(tab[srodek]==liczba)
        return srodek;
    else if(liczba<tab[srodek])
        return wyszukaj(l,srodek-1,liczba);
    else
        return wyszukaj(srodek+1,p,liczba);

}
