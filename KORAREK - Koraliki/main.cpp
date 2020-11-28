#include <iostream>
#include <algorithm>

using namespace std;

string koralik(int n, string a){

    if(n==0){
        reverse(a.begin(), a.end());
        return a;

    }

    if(n%2==0)
        return koralik(n/2,a+="c");
    else if(n%2!=0)
        return koralik(n/2,a+="b");

}

int main()
{

    int n;

    cin>>n;

    cout<<koralik(n,"")<<endl;

    return 0;
}
