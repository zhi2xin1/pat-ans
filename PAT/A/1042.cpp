#include <iostream>
int N,cards[2][54],shuffling[54],oneOrTwo=0;

void init(){
    std::cin>>N;
    for(int i=0;i<54;++i){
        std::cin>>shuffling[i];
        --shuffling[i];
        cards[0][i]=i;
    }
}

void shufflingOnce(){
    for(int i=0;i<54;++i){
        cards[!oneOrTwo][shuffling[i]]=cards[oneOrTwo][i];
    }
    oneOrTwo=!oneOrTwo;
}

void output(){
    char SHCDJ[]={'S','H','C','D','J'};
    int SHCDJn,n;
    for(int i=0;i<53;++i){
        n=(cards[oneOrTwo][i]+1)%13;
        if(n)
            SHCDJn=(cards[oneOrTwo][i]+1)/13;
        else{
            n=13;
            SHCDJn=(cards[oneOrTwo][i]+1)/13-1;
        }
        std::cout<<SHCDJ[SHCDJn]<<n<<' ';
    }
    n=(cards[oneOrTwo][53]+1)%13;
    if(n)
        SHCDJn=(cards[oneOrTwo][53]+1)/13;
    else{
        n=13;
        SHCDJn=(cards[oneOrTwo][53]+1)/13-1;
    }
    std::cout<<SHCDJ[SHCDJn]<<n<<std::endl;
}

int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    init();
    for(int i=0;i<N;++i)
        shufflingOnce();
    output();
}
