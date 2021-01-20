#include <iostream>

int main()
{
    std::string wyraz;

    while(std::cin>>wyraz){

        for(int i=0; i<=(wyraz.length()-1)/2; i++)
            std::swap(wyraz[i], wyraz[wyraz.length()-1-i]);

        std::cout<<wyraz<<std::endl;


    }


    return 0;
}
