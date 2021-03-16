#include<iostream>


int main(){


    int cases;
    std::cin>>cases;
    for(int q=0; q<cases; q++){

        int a,b;
        std::cin>>a>>b;

        
        a-=1;
        if(a==0){
            std::cout<<"TAK\n";
            continue;
        }
        while(b-a>=0){
            b-=a;
        }

        if(b>0)
            std::cout<<"TAK\n";
        else
            std::cout<<"NIE\n";

    }

}
