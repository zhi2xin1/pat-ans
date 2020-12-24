#include <iostream>

int main(){
    long long A,B,D_A,D_B,P_A=0,P_B=0;
    std::cin>>A>>D_A>>B>>D_B;
    while(A!=0){
        if(A%10==D_A)
            P_A=P_A*10+D_A;
        A/=10;
    }
    while(B!=0){
        if(B%10==D_B)
            P_B=P_B*10+D_B;
        B/=10;
    }
    std::cout<<P_A+P_B;
}
