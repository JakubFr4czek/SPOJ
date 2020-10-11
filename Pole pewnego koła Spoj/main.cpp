#include <iostream>
#include <cmath>


using namespace std;

int funkcja()
{

    long double d,r;

    cin>>r;
    cin>>d;

    d/=2;

    cout<<((r*r)-(d*d))*M_PI<<endl;
    //cout<<(pow(r,2)-pow(d,2))*M_PI<<endl;

    return 0;

}


int main()
{

        funkcja();




    return 0;
}
