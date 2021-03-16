#include<iostream>
int main(){
bool flag=false;
    std::string a;
    while(std::getline(std::cin,a)){
        for(int i=0; i<a.size(); i++){
            while(a[i]==' '){
                a.erase(i,1);
                flag=true;
            }
            if(flag){
                char c = toupper(a[i]);
                a[i]=c;
                flag=false;
            }
        }
        std::cout<<a<<std::endl;

    }
}
