#include <iostream>

int main(){
    int N,HanHua[4],expectAnswer,drink[2]={0};
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>HanHua[0]>>HanHua[1]>>HanHua[2]>>HanHua[3];
        expectAnswer=HanHua[0]+HanHua[2];
        if(expectAnswer==HanHua[1]&&expectAnswer!=HanHua[3])
            ++drink[1];
        else if(expectAnswer!=HanHua[1]&&expectAnswer==HanHua[3])
            ++drink[0];
    }
    std::cout<<drink[0]<<' '<<drink[1];
}
