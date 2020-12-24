#include <iostream>
#include <string>

int main(){
    char mate;
    int N,score,min_male_score=INT32_MAX,max_female_score=INT32_MIN;
    std::string name,id,min_male_name,min_male_id,max_female_name,max_female_id;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>name>>mate>>id>>score;
        if(mate=='M'&&score<min_male_score){
            min_male_name=name;
            min_male_id=id;
            min_male_score=score;
        }
        else if(mate=='F'&&score>max_female_score){
            max_female_name=name;
            max_female_id=id;
            max_female_score=score;
        }
    }
    if(max_female_score==INT32_MIN)
        std::cout<<"Absent"<<'\n';
    else
        std::cout<<max_female_name<<' '<<max_female_id<<'\n';
    if(min_male_score==INT32_MAX)
        std::cout<<"Absent"<<'\n';
    else
        std::cout<<min_male_name<<' '<<min_male_id<<'\n';
    if(max_female_score==INT32_MIN||min_male_score==INT32_MAX)
        std::cout<<"NA"<<std::endl;
    else
        std::cout<<max_female_score-min_male_score<<std::endl;
}
