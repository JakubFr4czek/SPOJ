#include <iostream>

using namespace std;

int main()
{
    int n,tab[11],suma;
    long long pesel;

    cin>>n;

    for(int k=0; k<n; k++){

        cin>>pesel;

        for(int i=10; i>=0; i--){

        tab[i]=pesel%10;
        pesel/=10;

        }
        ;
        suma=tab[0]*1 + tab[1]*3 + tab[2]*7 + tab[3]*9 + tab[4]*1 + tab[5]*3 + tab[6]*7 + tab[7]*9 + tab[8]*1 + tab[9]*3 + tab[10]*1;
        if(suma>0){

            if(suma%10==0)
                cout<<"D"<<endl;
            else
                cout<<"N"<<endl;

        }
        else
            cout<<"N"<<endl;



    }


    return 0;
}
