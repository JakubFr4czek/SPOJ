#include <iostream>

using namespace std;

int pot(int a, int b){

    if(b>a) return b/2;
    else return pot(a,b*2);

}


int main()
{
    int a;

    cin>>a;

    cout<<pot(a, 2)<<endl;


    return 0;
}
