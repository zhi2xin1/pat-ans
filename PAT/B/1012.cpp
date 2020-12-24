#include <iostream>
#include <iomanip>

int main(){
    int N,n,kinds[5]={0},addOrSub=-1,kinds_3_n=0;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>n;
        if(0==n%10)
            kinds[0]+=n;
        else if(1==n%5){
            if(addOrSub){
                kinds[1]+=n;
                addOrSub=0;
            }
            else{
                kinds[1]-=n;
                addOrSub=1;
            }
        }
        else if(2==n%5)
            ++kinds[2];
        else if(3==n%5){
            kinds[3]+=n;
            ++kinds_3_n;
            }
        else if(4==n%5)
            if(n>kinds[4])
                kinds[4]=n;
    }
    if(kinds[0])
        std::cout<<kinds[0]<<' ';
    else
        std::cout<<"N ";
    if(addOrSub!=-1)
        std::cout<<kinds[1]<<' ';
    else
        std::cout<<"N ";
    if(kinds[2])
        std::cout<<kinds[2]<<' ';
    else
        std::cout<<"N ";
    if(kinds_3_n)
        std::cout<<std::fixed << std::setprecision(1)<<(double)kinds[3]/kinds_3_n<<' ';
    else
        std::cout<<"N ";
    if(kinds[4])
        std::cout<<kinds[4]<<std::endl;
    else
        std::cout<<'N'<<std::endl;
}
