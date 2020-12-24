#include <iostream>
#include <iomanip>

int main(){
    double temp_0,temp_1,max_profit_solo,max_profit=1.0;
    char best_bet_now;
    for(int i=0;i<3;++i){
        std::cin>>max_profit_solo>>temp_0>>temp_1;
        best_bet_now='W';
        if(temp_0>max_profit_solo){
            max_profit_solo=temp_0;
            best_bet_now='T';
        }
        if(temp_1>max_profit_solo){
            max_profit_solo=temp_1;
            best_bet_now='L';
        }
        max_profit*=max_profit_solo;
        std::cout<<best_bet_now<<' ';
    }
    std::cout<<std::fixed<<std::setprecision(2)<<max_profit*1.3-2<<std::endl;
}
