#include <iostream>
#include <iomanip>
int N,temp,resultN;
double n[1010]={},tempD;

inline bool equalZero(double &x){
    return (x<0.000001)&&(x>-0.000001);
}

inline void input(){
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>temp>>tempD;
        n[temp]=tempD;
    }
}

inline void inputAndAdd(){
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>temp>>tempD;
        n[temp]+=tempD;
    }
}

int main(){
    input();
    inputAndAdd();
    
    for(int i=0;i<1001;++i){
        if(!equalZero(n[i]))
            ++resultN;
    }
    
    std::cout<<std::fixed<<std::setprecision(1)<<resultN;
    for(int i=1000;i>=0;--i){
        if(!equalZero(n[i]))
            std::cout<<' '<<i<<' '<<n[i];
    }
    std::cout<<std::endl;
}
