#include <iostream>
using namespace std;

int main() {
    int stackVar = 10;               // ���ÿ� ����
    int* heapVar = new int(20);      // ���� ����

    cout << "���� ���� �ּ�: " << &stackVar << endl;
    cout << "�� ���� �ּ�:   " << heapVar << endl;

    delete heapVar; // �޸� ���� ����
    return 0;
}