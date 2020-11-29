#include <iostream>

using namespace std;

int ciag(int a){

    if(a==1) return 1;
    else return ciag(--a)*(-2)+4;

}


int main()
{

    int n,a;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        cout<<ciag(a)<<endl;
    }


    return 0;
}
