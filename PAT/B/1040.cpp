#include <iostream>
long long patFind[100010],patCount=0;
char pat[100010];
int patN=0;

void inputInf()
{
    std::cin.getline(pat,100010);
    while(pat[patN]!='\0'){
        ++patN;
    }
    --patN;
}

void countPAT(){
    int P=0,T=0;
    for(int i=0;i<=patN;++i){
        switch (pat[i]) {
            case 'P':++P;break;
            case 'A':patFind[i]=P;break;
            default:break;
        }
    }
    for(int i=0;i<=patN;++i){
        switch (pat[patN-i]) {
            case 'T':++T;break;
            case 'A':patFind[patN-i]*=T;patCount+=patFind[patN-i];break;
            default:break;
        }
    }
}


int main() {
    inputInf();
    countPAT();
    std::cout<<patCount%1000000007;
    return 0;
}

