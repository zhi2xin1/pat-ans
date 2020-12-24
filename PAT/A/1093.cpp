#include <iostream>

int patFind[100010],patN,P,T;
long long patCount;

int main() {
    bool inputEOF=true;
    while(inputEOF){
        switch(getchar()){
            case 'P':++P;break;
            case 'A':patFind[patN]=P;break;
            case 'T':patFind[patN]=-1;break;
            case '\n':inputEOF=false;
        }
        ++patN;
    }
    for(int i=patN-1;i>=0;--i){
        if(patFind[i]==-1)
            ++T;
        else if(patFind[i])
            patCount+=patFind[i]*T;
    }
    std::cout<<patCount%1000000007;
    return 0;
}
