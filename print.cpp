//�������� ���� print.cpp � ���������� � ��� �������,
//����������� � ������������ �����.��� ��������� ������ �� ������ � ������� ��� ��� �������� �� �����

#include "inout.h"

void print(const std::vector<int>& vec) {

    std::cout << "�������� Vector: [";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << (i + 1 < vec.size() ? "; " : "");
    }
    std::cout << "]";
};