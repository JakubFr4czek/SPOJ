#include <iostream>

using namespace std;

int W_fib(int a){

    if(a==1 || a==2) return 1;
    else return W_fib(a-1)+W_fib(a-2);

}

int main()
{
    int a;

    cin>>a;

    cout<<W_fib(a)<<endl;

    return 0;
}
