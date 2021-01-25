#include <iostream>


int calc(int a){

    return (a>0)?calc(a-1)+a:0;
}

int main()
{
    int a;
    for(int i=0; i<10; i++){
    std::cin>>a;
    std::cout<<calc(a)<<std::endl;
    }
}

