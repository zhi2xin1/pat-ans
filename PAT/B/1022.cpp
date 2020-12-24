#include <iostream>
int d;
void tenToD(int N10){
    if(N10>=d)
        tenToD(N10/d);
    std::cout<<N10%d;
}
int main() {
    int a,b;
    std::cin>>a>>b>>d;
    tenToD(a+b);
    std::cout<<std::endl;
    return 0;
}
