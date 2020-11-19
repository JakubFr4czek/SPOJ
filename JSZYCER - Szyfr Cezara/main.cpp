#include <iostream>

using namespace std;

int main()
{
    string a="",b;

    while(getline(cin,b)){
        a+=b;
        a+='\n';
    }

    for(int i=0; i<a.length(); i++){

        if((a[i]>=65&&a[i]<=87)||(a[i]>=97&&a[i]<=119)){
            b=a[i]+3;
            cout<<b;
        }
        else if(a[i]>87&&a[i]<=90){
            b=65+(2-(90-a[i]));
            cout<<b;

        }
        else if(a[i]>119&&a[i]<=122){
            b=97+(2-(122-a[i]));
            cout<<b;
        }
        else if(a[i]=='\n')
            cout<<endl;
        else
            cout<<a[i];


    }


    return 0;
}
