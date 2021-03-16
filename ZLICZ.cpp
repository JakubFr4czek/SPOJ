#include<iostream>


int main(){

    std::string a;
    int cases;
    std::cin>>cases;
    int T[123];
    for(int i=0; i<123; i++)
        T[i]=0;

    for(int q=0; q<=cases; q++){

    std::getline(std::cin, a);

    for(int i=0; i<a.size(); i++){
        T[a[i]]++;
    }
    }
    char c;
    for(int i=97; i<123; i++){
        if(T[i]!=0){
        c = i;
        std::cout<<c<<" "<<T[i]<<std::endl; }
    }
    
    for(int i=65; i<91; i++){
        if(T[i]!=0){
        c = i;
        std::cout<<c<<" "<<T[i]<<std::endl; }
    }


}
