#include <iostream>

using namespace std;

bool wyszukaj(int tab[],int szukane, int lewy, int prawy){

    if(lewy<=prawy){

        int srodek=(lewy+prawy)/2;

        if(tab[srodek]==szukane) return true;
        else if(tab[srodek]>szukane) return wyszukaj(tab, szukane, lewy, srodek-1);  //szukany po lewej od srodka
        else if(tab[srodek]<szukane) return wyszukaj(tab, szukane, srodek+1, prawy);

    }return false;
}

int main()
{
    int dlugoscTablicy,wczytawka,iloscPrzypadkow;

    cin>>dlugoscTablicy;

    int * tab = new int[dlugoscTablicy];

    for(int i=0; i<dlugoscTablicy; i++){
        cin>>wczytawka;
        tab[i]=wczytawka;
    }

    cin>>iloscPrzypadkow;

    for(int i=0; i<iloscPrzypadkow; i++){
        cin>>wczytawka;
        if(wyszukaj(tab,wczytawka,0,dlugoscTablicy))
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }



    return 0;
}
