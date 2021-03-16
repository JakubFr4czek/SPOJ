#include<iostream>
#include<algorithm>

int compareGL(const void* a, const void* b){
    int A = *((int*)a);
    int B = *((int*)b);
    return B-A;
}

int main(){


    int cases;
    std::cin>>cases;
    for(int q=0; q<cases; q++){

        int a,b;
        std::cin>>a;
        int* tab = new int[a];
        for(int i=0; i<a; i++){
            std::cin>>b;
            tab[i]=b;
        }
        
        qsort(tab,a,sizeof(int),compareGL);

        int max = tab[0];

        int j=1;
        std::cout<<max;
        while(tab[j]==max&&j<a){
            std::cout<<" "<<max;
            j++;
        }
        for(int i=a-1; i>=j; i--){
            std::cout<<" "<<tab[i];
        }std::cout<<std::endl;


        delete[] tab;

    }

}
