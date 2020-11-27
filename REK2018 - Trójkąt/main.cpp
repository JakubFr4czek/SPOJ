#include <iostream>

using namespace std;

void N_trojkat(int a, string b){

    if(a==0){}
    else{
        N_trojkat(a-1,b+="*");
        cout<<b<<endl;
    }

}

int main()
{
    int a;

    cin>>a;

    N_trojkat(a,"");

    return 0;
}
