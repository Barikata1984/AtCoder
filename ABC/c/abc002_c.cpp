#include <iostream>#include <iomanip>#include <cmath>int main(){    float x1, y1, x2, y2, x3, y3;    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;    x2 -= x1;    y2 -= y1;    x3 -= x1;    y3 -= y1;    std::cout << std::fixed << std::setprecision(3) << std::abs(x2 * y3 - x3 * y2) * 0.5 << std::endl;    return 0;}