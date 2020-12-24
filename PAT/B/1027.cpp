#include <iostream>
int N,n,use_char_num_all=1,use_line=0,ch_num;
char ch;

inline void out_line(int i){
    ch_num=i+1+use_line;
    for(int j=0;j<ch_num;++j){
        if(j<use_line-i)
            std::cout<<' ';
        else
            std::cout<<ch;
    }
    std::cout<<'\n';
}

int main(){
    std::cin.sync_with_stdio(false);
    std::cout.sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin>>N>>ch;
    while(N+1>=use_char_num_all*2){
        ++use_line;
        use_char_num_all+=use_line*2+1;
    }
    use_char_num_all-=use_line*2+1;
    --use_line;
    for(int i=use_line;i>0;--i){
        out_line(i);
    }
    for(int i=0;i<=use_line;++i){
        out_line(i);
    }
    if(N)
        std::cout<<N-use_char_num_all*2+1<<std::endl;
    else
        std::cout<<0<<std::endl;
}
