#include <iostream>


int main()
{
    const int ilosc_monet=9;// 1gr 2gr 5gr 10gr 20gr 50gr 100gr 200gr 500gr
    int monety[ilosc_monet] = {1, 2, 5, 10, 20, 50, 100, 200, 500};

    int licznik=0;
    double reszta;
    std::cin>>reszta;
    reszta*=100;

    int i=1;
    while(reszta>0){

        if(reszta-monety[ilosc_monet-i]>=0){
            reszta-=monety[ilosc_monet-i];
            licznik++;
        }
        else
            i++;
    }
    std::cout<<licznik;



    return 0;
}
