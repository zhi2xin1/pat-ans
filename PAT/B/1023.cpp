#include <iostream>

int nums[10];

void inputInf(){
    for(int & num : nums){
        std::cin>>num;
    }
}

void output(){
    for(int i=1;i<10;++i){
        if(nums[i]!=0){
            std::cout<<i;
            --nums[i];
            break;
        }
    }
    for(int i=0;i<10;++i){
        for(int j=0;j<nums[i];++j){
            std::cout<<i;
        }
    }
}

int main() {
    inputInf();
    output();
    return 0;
}
