#include <iostream>
#include <algorithm>
#include <iomanip>
struct Student{
    unsigned long long registrationNumber;
    int finalRank,locationNumber,localRank,score;
}students[30000];

int locationNum,locationStudentsNum[100],locationStart[100],nowStudentsNum=0;

bool cmp(Student a,Student b){
    if(a.score!=b.score)
        return a.score>b.score;
    else
        return a.registrationNumber<b.registrationNumber;
}

void sortLocal(int localNum){
    std::sort(students+locationStart[localNum],students+locationStudentsNum[localNum]+locationStart[localNum],cmp);
}

void sortFinal(){
    std::sort(students,students+nowStudentsNum,cmp);
}

void rankLocal(int localNum){
    for(int i=0;i<locationStudentsNum[localNum];++i){
        if(i!=0&&students[locationStart[localNum]+i].score==students[locationStart[localNum]+i-1].score)
            students[locationStart[localNum]+i].localRank=students[locationStart[localNum]+i-1].localRank;
        else
            students[locationStart[localNum]+i].localRank=i+1;
    }
}

void rankFinalAndOut(){
    std::cout<<nowStudentsNum<<'\n';
    for(int i=0;i<nowStudentsNum;++i){
        if(i!=0&&students[i].score==students[i-1].score)
            students[i].finalRank=students[i-1].finalRank;
        else
            students[i].finalRank=i+1;
        std::cout<<std::setw(13)<<std::setfill('0')<<students[i].registrationNumber<<' '<<students[i].finalRank
        <<' '<<students[i].locationNumber<<' '<<students[i].localRank<<'\n';
    }
    std::cout<<std::flush;
}

int inputStudentInf(){
    std::cin>>locationNum;
    for(int i=0;i<locationNum;++i){
        std::cin>>locationStudentsNum[i];
        locationStart[i]=nowStudentsNum;
        for(int j=0;j<locationStudentsNum[i];++j){
            std::cin>>students[nowStudentsNum+j].registrationNumber
            >>students[nowStudentsNum+j].score;
            students[nowStudentsNum+j].locationNumber=i+1;
        }
        sortLocal(i);
        rankLocal(i);
        nowStudentsNum+=locationStudentsNum[i];
    }
    return 0;
}

int main() {
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    inputStudentInf();
    sortFinal();
    rankFinalAndOut();
    return 0;
}
