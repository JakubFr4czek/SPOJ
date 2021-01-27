#include <iostream>

int NWD(int a, int b){
    return (a>b)?NWD(a-b,b):(b>a)?NWD(a,b-a):a;
}

int main()
{
    int n,a,b;

    std::cin>>n;

    for(int i=0; i<n; i++){

        std::cin>>a>>b;
        std::cout<<NWD(a,b)<<std::endl;

    }


    return 0;
}
