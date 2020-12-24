#include <iostream>
#include <string>

int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,ShiJi,KaoShi,KaoShis[1001];
    std::string id,ids[1001];
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>id>>ShiJi>>KaoShi;
        ids[ShiJi]=id;
        KaoShis[ShiJi]=KaoShi;
    }
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>ShiJi;
        std::cout<<ids[ShiJi]<<' '<<KaoShis[ShiJi]<<'\n';
    }
    std::cout<<std::flush;
}
