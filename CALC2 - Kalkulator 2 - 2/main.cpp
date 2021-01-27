#include <iostream>
#include <array>

int main()
{
    std::array<int ,10> arr {};

    char a;
    int b,c;

    while(std::cin>>a){

        std::cin>>b>>c;

        if(a=='z'){
            arr[b]=c;
        }
        else if(a=='%'){
            std::cout<<arr[b]%arr[c]<<std::endl;
        }
        else if(a=='/'){
            std::cout<<arr[b]/arr[c]<<std::endl;
        }
        else if(a=='+'){
            std::cout<<arr[b]+arr[c]<<std::endl;
        }
        else if(a=='-'){
            std::cout<<arr[b]-arr[c]<<std::endl;
        }
        else if(a=='*'){
            std::cout<<arr[b]*arr[c]<<std::endl;
        }


    }



    return 0;
}
