#include <iostream>

int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,M,n[101];
    std::cin>>N>>M;
    for(int i=0;i<N;++i){
        std::cin>>n[i];
    }
    M%=N;
    for(int i=N-M;i<N;++i){
        std::cout<<n[i]<<' ';
    }
    --N;
    for(int i=0;i<N-M;++i){
        std::cout<<n[i]<<' ';
    }
    std::cout<<n[N-M]<<std::endl;
}
