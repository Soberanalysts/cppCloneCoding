#include <iostream>
#include <set>
using namespace std;

int main() {
    int nums[] = { 5, 1, 3, 5, 2, 3, 4 };
    set<int> s;

    for (int num : nums) {
        s.insert(num);  // set�� �ߺ��� �ڵ����� ������
    }

    cout << "set�� ����� ���� (�ڵ� ���ĵ�): ";
    for (int val : s) {
        cout << val << " ";
    }

    return 0;
}