#include <iostream>
int schools[100000];
int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,school,score,maxSchool,maxScore=0;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>school>>score;
        schools[school]+=score;
        if(schools[school]>maxScore){
            maxSchool=school;
            maxScore=schools[school];
        }
    }
    std::cout<<maxSchool<<' '<<maxScore<<std::endl;
    return 0;
}
