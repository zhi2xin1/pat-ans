#include <iostream>

int main(){
    int n,i=0;
    std::cin>>n;
    while(n!=1){
        if(n&0x1)
            n=(n*3+1)/2;
        else
            n/=2;
        ++i;
    }
    std::cout<<i;
}
