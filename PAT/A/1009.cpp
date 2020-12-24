#include <iostream>
#include <iomanip>

const int max_len=2001;
int N,temp,resultN,oneOrTwo=0;;
double n1[max_len]={},n2[max_len]={},tempD;

inline bool equalZero(double &x){
    return (x<0.000001)&&(x>-0.000001);
}

inline void inputFirst(){
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>temp>>tempD;
        n1[temp]=tempD;
    }
}

inline void inputAndMul(){
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>temp>>tempD;
        for(int j=0;j<max_len;++j){
            if(!equalZero(n1[j]))
                n2[temp+j]+=n1[j]*tempD;
        }
    }
}

inline void output(){
    for(int i=0;i<max_len;++i){
        if(!equalZero(n2[i]))
            ++resultN;
    }
    std::cout<<std::fixed<<std::setprecision(1)<<resultN;
    for(int i=max_len;i>=0;--i){
        if(!equalZero(n2[i]))
            std::cout<<' '<<i<<' '<<n2[i];
    }
    std::cout<<std::endl;
}

int main(){
    inputFirst();
    inputAndMul();
    output();
}
