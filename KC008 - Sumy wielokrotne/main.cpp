#include <iostream>

int main()
{

    long long a, suma, sumaCalosc=0;

    while(std::cin>>a){

        suma=0;
        suma+=a;

        while(getchar()!='\n'){

            std::cin>>a;
            suma+=a;

        }
        std::cout<<suma<<std::endl;
        sumaCalosc+=suma;
    }
    std::cout<<sumaCalosc<<std::endl;

    return 0;
}
