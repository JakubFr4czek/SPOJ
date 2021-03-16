#include<iostream>

int main(){

    std::string a;

    while(std::getline(std::cin,a)){

        for(int i=0; i<a.size(); i++){
           if(a[i]=='<'){
               while(a[i]!='>'&&i<a.size()){
                   if(a[i]!='/'){
                       a[i]=toupper(a[i]);
                   }
                   i++;
               }
           } 
        }
        std::cout<<a<<std::endl;

    }

}