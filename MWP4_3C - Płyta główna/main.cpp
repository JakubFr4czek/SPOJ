#include <iostream>
#include <cmath>

int calculate(std::string);

int main()
{
    int n;
    std::string przypadek;

    std::cin>>n;


    for(int i=0; i<n; i++){

        std::cin>>przypadek;
        std::cout<<calculate(przypadek)<<std::endl;

    }

    return 0;
}

int calculate(std::string a){

    int suma=0,left,right;
    char pos='A';

    for(char i : a){
        left = abs(fmin(i,pos)-(fmax(i,pos)-26));
        right = abs(i-pos);
        pos=i;
        suma+=fmin(left,right);
        //printf("%i\n", left);
        //printf("%i\n", right);
    }

    return suma;
}
