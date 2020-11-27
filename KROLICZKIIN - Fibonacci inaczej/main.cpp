#include <iostream>

using namespace std;

void W_ciag(long long a, long long b,  long long c,  long long d){


    cout<<a+b+c<<" ";

    if(d>1) W_ciag(b,c,a+b+c,d-1);


}

int main()
{
    long long a,b,c,d;

    cin>>a>>b>>c>>d;

    W_ciag(a,b,c,d);

    return 0;
}
