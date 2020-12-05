#include <iostream>

using namespace std;

int s_Dzielnikow(int a){

    int suma=0;

    for(int i=1; i<=a; i++){

        if(a%i==0) suma+=i;

    }return suma;
}

int main()
{

    int n,a;

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>a;
        cout<<s_Dzielnikow(a)<<endl;
    }

    return 0;
}
