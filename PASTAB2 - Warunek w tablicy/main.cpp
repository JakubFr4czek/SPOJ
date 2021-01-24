#include <iostream>
#include <vector>

void write_vector(std::vector<int>&, char, int);

int main()
{
    std::vector<int> tab;
    int a;
    char b;

    std::cin>>a; //ignore number of cases, so it gets more exciting :D

    while(true){

        if(std::cin>>a)
            tab.push_back(a);


        else{
            std::cin.clear();
            std::cin>>b>>a;
            write_vector(tab,b,a);
            return 0;
        }
    }

    return 0;
}

void write_vector(std::vector<int>& tab, char b, int a){

    if(b == '<'){

        for(int n : tab){

            if(n<a)
                printf("%i\n",n);
        }
    }
    else if(b == '>'){

        for(int n : tab){

            if(n>a)
                printf("%i\n",n);
        }
    }

}
