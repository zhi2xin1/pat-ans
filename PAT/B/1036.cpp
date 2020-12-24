#include <iostream>

int main() {
    int col, row;
    char c;
    std::cin >> col>>c;

    // Take out the lowest bit and judge whether it is odd.
    // Here we use the signed positive number complement code,
    // when the lowest bit is 1, it is odd.
    row = 1 != (col & 0x1) ? col / 2 : col / 2 + 1;
    //std::cout << "row: " << row << "\ncol: " << col << std::endl;

    // A new dynamic array is created to hold the string that will be output.
    char firstOrLastLine[21];
    char otherLine[21];

    firstOrLastLine[col] = '\0';
    otherLine[col] = '\0';
    firstOrLastLine[col - 1] = c;
    otherLine[col - 1] = c;
    firstOrLastLine[0] = c;
    otherLine[0] = c;
    col -= 2;
    while (col != 0) {
        firstOrLastLine[col] = c;
        otherLine[col] = ' ';
        --col;
    }
    row -= 2;
    std::cout << firstOrLastLine << std::endl;
    while (row != 0) {
        std::cout << otherLine << std::endl;
        --row;
    }
    std::cout << firstOrLastLine << std::endl;
    return 0;
}
