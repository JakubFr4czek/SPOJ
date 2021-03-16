#include <iostream>
#include <vector>
#include <cmath>

int main(){
    
    int cases;
    std::cin>>cases;

    int read, size;
    for(int q=0; q<cases; q++){

        std::cin>>size;
        std::vector<int> tab;
        double srednia=0;
        for(int i=0; i<size; i++){

            std::cin>>read;
            tab.push_back(read);
            srednia+=read;
        }
        srednia/=size;

        double temp=0,max=-1;
        int num=0;

        for(int i=0; i<size; i++){
            temp = fabs(tab[i]-srednia); 
            if(max==-1){
                max=temp;
                num = tab[i];
            }
            if(temp<max){
                max = temp; 
                num = tab[i];
            }
        }

        std::cout<<num<<std::endl;

        tab.clear();
    }


}