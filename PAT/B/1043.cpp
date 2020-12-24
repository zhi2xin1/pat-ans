#include <cstdio>

int main() {
    int PATest[6]={0};
    bool inputEOF=true;
    while(inputEOF){
        switch(getchar()){
            case 'P':++PATest[0];break;
            case 'A':++PATest[1];break;
            case 'T':++PATest[2];break;
            case 'e':++PATest[3];break;
            case 's':++PATest[4];break;
            case 't':++PATest[5];break;
            case '\n':inputEOF=false;
        }
    }
    int maxN=0;
    for(int i:PATest)
        if(i>maxN)
            maxN=i;
    for(int i=0;i<maxN;++i){
        if((PATest[0]--)>0)
            putchar('P');
        if((PATest[1]--)>0)
            putchar('A');
        if((PATest[2]--)>0)
            putchar('T');
        if((PATest[3]--)>0)
            putchar('e');
        if((PATest[4]--)>0)
            putchar('s');
        if((PATest[5]--)>0)
            putchar('t');
    }
    putchar(10);
    return 0;
}
