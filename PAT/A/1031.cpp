#include <cstdio>

int main(){
    int N=0,height,wide;
    char u,U[80];
    while(true){
        u=getchar();
        if(u!='\n')
            U[N]=u;
        else
            break;
        ++N;
    }
    height=(N+2)/3-1;
    wide=N-height*2;
    for(int i=0;i<height;++i){
        for(int j=0;j<wide;++j){
            if(j==0)
                putchar(U[i]);
            else if(j==wide-1)
                putchar(U[N-i-1]);
            else
                putchar(' ');
        }
        putchar('\n');
    }
    for(int i=0;i<wide;++i)
        putchar(U[i+height]);
    putchar('\n');
    return 0;
}
