#include <iostream>

int main()
{
    int poszukiwana, dlugosc, ciag, licznik;

    while(std::cin>>poszukiwana){

        std::cin>>dlugosc;

        for(int i=0; i<dlugosc; i++){

            std::cin>>ciag;

            if(ciag==poszukiwana)
                licznik++;
        }
        std::cout<<licznik<<std::endl;
        licznik=0;
    }

    return 0;
}
