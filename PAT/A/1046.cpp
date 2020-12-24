//#include <iostream>
#include <cstdio>

void writex(int x)
{
    if(x>9)
        writex(x/10);
    putchar(x%10+'0');
}

void readx(int &x)
{
    x=0;
    char s=getchar();
    while(s<'0'||s>'9')
        s=getchar();
    while(s>='0'&&s<='9'){
        x=x*10+s-'0';
        s=getchar();
    }
}

int main(){
    int N,testN,dis[100000],ori,des;
    int sum=0,sum_2=0,temp;
    readx(N);
    for(int i=0;i<N;++i){
        readx(temp);
        dis[i]=sum;
        sum+=temp;
    }
    sum_2=sum/2;
    readx(testN);
    for(int i=0;i<testN;++i){
        temp=0;
        readx(ori);
        readx(des);
        --ori;
        --des;
        if(ori<des){
            temp=dis[des]-dis[ori];
        }
        else{
            temp=dis[ori]-dis[des];
        }
        if(temp>sum_2)
            temp=sum-temp;
        writex(temp);
        putchar(10);
    }
}
