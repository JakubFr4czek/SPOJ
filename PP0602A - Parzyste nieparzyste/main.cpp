#include <iostream>
#include <vector>

void funkcja(int a){

    int liczba;
    std::vector<int> tab;

    for(int i=1; i<=a; i++){
        std::cin>>liczba;

        if(i%2==0)
            std::cout<<liczba<<" ";
        else
            tab.push_back(liczba);
    }
    for(int i=0; i<tab.size(); i++)
        std::cout<<tab[i]<<" ";
    std::cout<<std::endl;
}

int main()
{
    int n,m;

    std::cin>>n;

    for(int i=0; i<n; i++){
        std::cin>>m;
        funkcja(m);
    }


    return 0;
}
