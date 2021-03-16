#include<iostream>
#include<vector>

int main(){

    int a,b, size, moves, read;
    std::vector<int> T,Q;

    std::cin>>size>>moves;

    for(int i=0; i<size; i++){
        std::cin>>read;
        T.push_back(read);
    }

    while(moves-size>=0)
        moves-=size;

    for(int i=moves; i<size; i++)
        Q.push_back(T[i]);

    for(int i=0; i<moves; i++)
        Q.push_back(T[i]);


    for(int i=0; i<size; i++){
        std::cout<<Q[i]<<" ";
    }

}
