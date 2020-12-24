#include <iostream>

int main() {
    char str[81];
    int words[40][2];
    std::cin.getline(str,81);
    int len=0,word=0,start=0;
    while(str[len]!='\0') {
        if (str[len] == ' ') {
            words[word][0] = start;
            words[word][1] = len;
            start = len + 1;
            ++word;
        }
        ++len;
    }
    words[word][0] = start;
    words[word][1] = len;
    for (int j = words[word][0]; j < words[word][1]; ++j)
            std::cout << str[j];
    for(int i=1;i<=word;++i) {
        std::cout<<" ";
        for (int j = words[word-i][0]; j < words[word-i][1]; ++j)
            std::cout << str[j];
    }
    std::cout<<std::endl;
    return 0;
}
