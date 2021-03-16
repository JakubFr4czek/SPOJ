#include<iostream>
#include<cmath>


int main(){


    int cases;
    std::cin>>cases;
    for(int q=0; q<cases; q++){

        double  a,b,c;
        std::cin>>a>>b>>c;
        double almost = fabs(((a+b)-(b*c))/(c-1));
       
        std::cout<<(round(almost*12))<<std::endl;;

    }

}
