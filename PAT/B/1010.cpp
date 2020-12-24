#include <iostream>
int coe[1010],n[1010],N=0;
int main(){
    std::cin>>coe[N]>>n[N];
    while(!std::cin.eof()){
        ++N;
        std::cin>>coe[N]>>n[N];
    }
    --N;
    if(N>0)
    std::cout<<coe[0]*n[0]<<' '<<n[0]-1;
    for(int i=1;i<N;++i){
        std::cout<<' '<<coe[i]*n[i]<<' '<<n[i]-1;
    }
    if(N==0&&n[N]==0)
        std::cout<<"0 0"<<std::endl;
    else if(n[N]){
        std::cout<<' '<<coe[N]*n[N]<<' '<<n[N]-1<<std::endl;
    }
    else
        std::cout<<std::endl;
}
