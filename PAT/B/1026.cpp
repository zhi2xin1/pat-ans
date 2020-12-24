#include <iostream>

int main(){
    long long CLK_TCK=100,C1,C2,C_Diff,hh,mm,ss;
    std::cin>>C1>>C2;
    C_Diff=(C2-C1)/CLK_TCK;
    if(((C2-C1)%CLK_TCK)>=50)
        ++C_Diff;
    hh=C_Diff/3600;
    mm=(C_Diff%3600)/60;
    ss=(C_Diff%3600)%60;
    if(hh>10)
        std::cout<<hh<<':';
    else
        std::cout<<'0'<<hh<<':';
    if(mm>10)
        std::cout<<mm<<':';
    else
        std::cout<<'0'<<mm<<':';
    if(ss>10)
        std::cout<<ss<<std::endl;
    else
        std::cout<<'0'<<ss<<std::endl;
}
