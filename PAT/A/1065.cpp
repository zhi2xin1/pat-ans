#include <iostream>
#include <cstdio>

inline void readSigned(unsigned long long &x,bool &f)
{
    f=true;
    char s=getchar();
    x=0;
    while(s<'0'||s>'9'){if(s=='-')f=false;s=getchar();}
    while(s>='0'&&s<='9'){x=x*10+s-'0';s=getchar();}
}

int main(){
    bool bigger,A_sign,B_sign,C_sign;
    int T;
    unsigned long long A,B,C;
    std::cin>>T;
    for(int t=0;t<T;++t){
        readSigned(A,A_sign);
        readSigned(B,B_sign);
        readSigned(C,C_sign);
        if(A_sign&&B_sign){
            if(C_sign){
                if(A+B==0&&(A||B)){
                    bigger=true;
                }
                else
                    bigger=A+B>C;
            }
            else
                bigger=true;
        }
        else if(!A_sign&&!B_sign){
            if(C_sign)
                bigger=false;
            else{
                if(A+B==0)
                    bigger=false;
                else
                    bigger=A+B<C;
            }
        }
        else if(!A_sign){
            if(A>B){
                if(C_sign>0)
                    bigger=false;
                else{
                    bigger=A-B<C;
                }
            }
            else
                bigger=B-A>C;
        }
        else if(!B_sign){
            if(A<B){
                if(C_sign>0)
                    bigger=false;
                else{
                    bigger=B-A<C;
                }
            }
            else
                bigger=A-B>C;
        }
        if(bigger)
            std::cout<<"Case #"<<t+1<<": true"<<std::endl;
        else
            std::cout<<"Case #"<<t+1<<": false"<<std::endl;
    }
}
