#include <iostream>
int BCJ2Num(char &bcj){
    switch(bcj){
        case 'B':return 0;
        case 'C':return 1;
        default: return 2;
    }
}

char BCJWin(int BCJs[]){
    int max=0,bcj=0;
    for(int i=0;i<3;++i){
        if(BCJs[i]>max){
            max=BCJs[i];
            bcj=i;
        }
    }
    switch(bcj){
        case 0:return 'B';
        case 1:return 'C';
        default:return 'J';
    }
}

int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,results[2][3]={0},result=0,BCJs[2][3]={0},ANum,BNum;
    //B->0
    //C->1
    //J->2
    int expectResult[3][3]={{0,1,-1},{-1,0,1},{1,-1,0}};
    char A,B;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>A>>B;
        ANum=BCJ2Num(A);
        BNum=BCJ2Num(B);
        result=expectResult[ANum][BNum];
        switch(result){
            case 0:++results[0][1];++results[1][1];break;
            case 1:++results[0][0];++results[1][2];++BCJs[0][ANum];break;
            default:++results[0][2];++results[1][0];++BCJs[1][BNum];
        }
    }
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j)
            std::cout<<results[i][j]<<' ';
        std::cout<<results[i][2]<<std::endl;
    }
    std::cout<<BCJWin(BCJs[0])<<' '<<BCJWin(BCJs[1])<<std::endl;
}
