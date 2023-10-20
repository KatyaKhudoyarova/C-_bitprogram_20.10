#include <iostream>


int main() {
int n;
std::cout<<"Enter a number belong 0 and 255:";
std::cin>>n;

    if(n>0&&n<255){
        for(int bit=7;bit>=0;bit--){
            int BitM=(n >> bit)&1;
            std::cout<<BitM;


        }
    }else{
        std::cout<<"Incorrect input";
    }
    return 0;
}








