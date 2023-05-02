#include "inout.h"

int main() {

    setlocale(LC_ALL, "Russian");//Установка русской лакали консоли

    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}
