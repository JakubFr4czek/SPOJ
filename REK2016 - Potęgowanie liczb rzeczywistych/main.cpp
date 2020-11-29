#include <iostream>

using namespace std;

double pot(double a, double b){

    if(b==1) return a;
    else return pot(a,--b)*a;


}

int main()
{

    double a,b;

    cin>>a>>b;

    cout<<pot(a,b);

    return 0;
}
