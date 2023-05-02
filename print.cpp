//—оздайте файл print.cpp и реализуйте в ней функцию,
//объ€вленную в заголовочном файле.ќна принимает ссылку на вектор и выводит все его значени€ на экран

#include "inout.h"

void print(const std::vector<int>& vec) {

    std::cout << "Ёлементы Vector: [";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << (i + 1 < vec.size() ? "; " : "");
    }
    std::cout << "]";
};