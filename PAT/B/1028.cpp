#include <iostream>
#include <string>

int main(){
    int N,n=0;
    std::string today="2014/09/06",earliest_day="1814/09/06",
    oldest_name,oldest_birth="2014/09/06",youngest_name,youngest_birth="1814/09/06",
    name,birth;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>name>>birth;
        if(birth>today||birth<earliest_day)
            continue;
        else{
            ++n;
            if(birth<oldest_birth){
                oldest_name=name;
                oldest_birth=birth;
            }
            if(birth>youngest_birth){
                youngest_name=name;
                youngest_birth=birth;
            }
        }
    }
    if(n)
        std::cout<<n<<' '<<oldest_name<<' '<<youngest_name<<std::endl;
    else
        std::cout<<0<<std::endl;
}
