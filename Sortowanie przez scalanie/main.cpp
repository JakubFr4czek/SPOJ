#include <iostream>
#include <ctime>
#include <cmath>

int *pom;

void scal(int tab[], int lewy, int prawy){

    int srodek=(lewy+prawy)/2;

    int i = lewy;
    int j = srodek+1;

    for(int i=lewy; i<=prawy; i++)
        pom[i]=tab[i];

    for(int k=lewy; k<=prawy; k++){

        if(j<=prawy)
            if(i<=srodek)
                if(pom[i]<=pom[j])
                    tab[k]=pom[i++];
                else
                    tab[k]=pom[j++];
            else
                tab[k]=pom[j++];
        else
            tab[k]=pom[i++];
    }


}

void sortuj(int tab[],int lewy, int prawy){

    if(lewy>=prawy)
        return;

    int srodek = (lewy+prawy)/2;

    sortuj(tab, lewy, srodek);
    sortuj(tab, srodek+1, prawy);


    scal(tab,lewy,prawy);
}

int main()
{
    srand(time(NULL));

    int *tab;

    int rozmiar;
    std::cin>>rozmiar;

    tab = new int[rozmiar];
    pom = new int[rozmiar];

    for(int i=0; i<rozmiar; i++)
        tab[i]=rand()%20;

    sortuj(tab,0,rozmiar-1);

    for(int i=0; i<rozmiar; i++)
        std::cout<<tab[i]<<" ";


    return 0;
}
