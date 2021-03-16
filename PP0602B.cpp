#include <iostream>

int main(){

    int cases, x, y;
    std::cin>>cases;

    int **tab;
    for(auto q=0; q<cases; q++){
        std::cin>>x>>y;

        tab = new int*[x];

        for(int i=0; i<x; i++)
            tab[i] = new int[y];

        int read;

        for(int j=0; j<x; j++){
            for(int i=0; i<y; i++){

                std::cin>>read;
                tab[j][i]=read;

            }
        }


        int i=0, j=0;
        
        

        while(i<y-1){
            std::swap(tab[j][i], tab[j][i+1]);
            i++;
        }
        
        while(j<x-1){
            std::swap(tab[j][i], tab[j+1][i]);
            j++;
        }

        while(i>0){
            std::swap(tab[j][i], tab[j][i-1]);
            i--;
        }

        while(j>1){
            std::swap(tab[j][i], tab[j-1][i]);
            j--;
        }

    
     for(int j=0; j<x; j++){
            for(int i=0; i<y; i++){

                std::cout<<tab[j][i]<<" ";

            }printf("\n");
        }
        delete[] tab;
    }
}