#include <iostream>
#include <string>

int main(){
    int N,score,max_student_score,min_student_score;
    std::string name,id,max_student_name,max_student_id,min_student_name,min_student_id;
    max_student_score=INT32_MIN;
    min_student_score=INT32_MAX;
    std::cin>>N;
    for(int i=0;i<N;++i){
        std::cin>>name>>id>>score;
        if(score>max_student_score){
            max_student_score=score;
            max_student_name=name;
            max_student_id=id;
        }
        if(score<min_student_score){
            min_student_score=score;
            min_student_name=name;
            min_student_id=id;
        }
    }
    std::cout<<max_student_name<<' '<<max_student_id<<'\n'
        <<min_student_name<<' '<<min_student_id<<std::endl;
}
