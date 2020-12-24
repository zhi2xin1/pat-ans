#include <iostream>
#include <string>

int main(){
    int N;
    std::string unlock_time="24:59:59",lock_time="00:00:00",unlocker,locker,id,sign_in_time,sign_out_time;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>id>>sign_in_time>>sign_out_time;
        if(sign_in_time<unlock_time){
            unlocker=id;
            unlock_time=sign_in_time;
        }
        if(sign_out_time>lock_time){
            locker=id;
            lock_time=sign_out_time;
        }
    }
    std::cout<<unlocker<<' '<<locker<<std::endl;
}
