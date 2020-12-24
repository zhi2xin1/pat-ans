#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

double totalRequest, maxProfit = 0;
int kindsNum;
std::vector<std::vector<double>> moonCake;

bool cmp(const std::vector<double>& a, const std::vector<double>& b) {
    if (a[1]/a[0]-b[1]/b[0]>0.0001)
        return a[1]/a[0]>b[1]/b[0];
    else
        return a[0] > b[0];
}

void sortPrice() {
    std::sort(moonCake.begin(), moonCake.end(), cmp);
}

void inputInf() {
    std::cin >> kindsNum >> totalRequest;
    std::vector<double> temp(3);
    for (int i = 0; i < kindsNum; ++i) {
        std::cin >> temp[0];
        moonCake.push_back(temp);
    }
    for (int i = 0; i < kindsNum; ++i) {
        std::cin >> moonCake[i][1];
        moonCake[i][2] = 0;
    }
}

void getMaxProfit() {
    for (int i = 0; i < kindsNum && totalRequest > 0; ++i) {
        if (totalRequest > moonCake[i][0]) {
            totalRequest -= moonCake[i][0];
            moonCake[i][2] = moonCake[i][0];
            maxProfit += moonCake[i][1];
        } else {
            moonCake[i][2] = totalRequest;
            maxProfit += moonCake[i][1] / moonCake[i][0] * totalRequest;
            totalRequest = 0;
        }
    }
}

int main() {
    inputInf();
    sortPrice();
    getMaxProfit();
    std::cout <<std::fixed<<std::setprecision(2)<< maxProfit << std::endl;
    return 0;
}
