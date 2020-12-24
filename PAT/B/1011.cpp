#include <iostream>

int main(){
    long long T,A,B,C;
    std::cin>>T;
    for(int t=0;t<T;++t){
        std::cin>>A>>B>>C;
        if(A+B>C)
            std::cout<<"Case #"<<t+1<<": true"<<std::endl;
        else
            std::cout<<"Case #"<<t+1<<": false"<<std::endl;
    }
}
