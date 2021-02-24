#include <iostream>

int main()
{

    int miasta;
    std::cin>>miasta;

    long long suma, a, sumaMax=0;

    for(int i=0; i<miasta; i++){

        std::cin>>a;

        suma+=a;

        if(suma>sumaMax)
            sumaMax=suma;

        if(suma<=0)
            suma=0;
    }
    std::cout<<sumaMax;

    return 0;
}
