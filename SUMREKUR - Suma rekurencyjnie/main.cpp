#include <iostream>

using namespace std;

int W_suma(int a){

    if(a==0) return 0;
    if(a==1) return 1;
    else return W_suma(a-1)+a;

}

int main()
{
    int n,a;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        cout<<W_suma(a)<<endl;
    }

    return 0;
}
