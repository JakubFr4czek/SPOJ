#include <iostream>

int main()
{
    std::string wyraz;
    long long wyrazy, liczby;

    while(std::cin>>wyraz){

        wyrazy=liczby=0;

        if(isalpha(wyraz[0]))
            wyrazy++;
        else
            liczby++;


        while(getchar()!='\n'){

            std::cin>>wyraz;

            if(isalpha(wyraz[0]))
                wyrazy++;
            else
                liczby++;

        }
        std::cout<<liczby<<" "<<wyrazy<<std::endl;
    }

    return 0;
}
