#include <iostream>
#include <algorithm>

using namespace std;

string Na_trojkowy(int a, string b){

    if(a==0&&b.length()==0){
        return b+"0";
    }
    else if(a==0){
        reverse(b.begin(), b.end());
        return b;
    }

    if(a%3==0)
        return Na_trojkowy(a/3,b+="0");
    else if(a%3==1)
        return Na_trojkowy(a/3,b+="1");
    else if(a%3==2)
        return Na_trojkowy(a/3,b+="2");
}

int main()
{
    int a;

    cin>>a;

    cout<<Na_trojkowy(a,"")<<endl;

    return 0;
}
