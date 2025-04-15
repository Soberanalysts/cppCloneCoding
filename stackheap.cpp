#include <iostream>
using namespace std;

int main() {
    int stackVar = 10;               // 스택에 저장
    int* heapVar = new int(20);      // 힙에 저장

    cout << "스택 변수 주소: " << &stackVar << endl;
    cout << "힙 변수 주소:   " << heapVar << endl;

    delete heapVar; // 메모리 누수 방지
    return 0;
}