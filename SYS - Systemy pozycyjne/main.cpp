#include <iostream>

using namespace std;

string decToHex(int a){

    if(a>0&&a%16<10) return decToHex(a/16)+to_string(a%16);
    else if(a>0&&a%16==10) return decToHex(a/16)+"A";
    else if(a>0&&a%16==11) return decToHex(a/16)+"B";
    else if(a>0&&a%16==12) return decToHex(a/16)+"C";
    else if(a>0&&a%16==13) return decToHex(a/16)+"D";
    else if(a>0&&a%16==14) return decToHex(a/16)+"E";
    else if(a>0&&a%16==15) return decToHex(a/16)+"F";
    else return "";

}

string decToJedena(int a){

    if(a>0&&a%11<10) return decToJedena(a/11)+to_string(a%11);
    else if(a>0&&a%11==10) return decToJedena(a/11)+"A";
    else return "";

}


int main()
{
    int n,a;

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>a;

        cout<<decToHex(a)<<" "<<decToJedena(a)<<endl;

    }

    return 0;
}
