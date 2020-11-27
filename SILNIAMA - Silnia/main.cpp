#include <iostream>

using namespace std;

long long silnia(long long n){

    if(n==0) return 1;
    else return silnia(n-1)*n;

}

int main()
{
    long long n,a;

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>a;

        cout<<silnia(a)<<endl;


    }

    return 0;
}
