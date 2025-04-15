#include <iostream>
#include <set>
using namespace std;

int main() {
    int nums[] = { 5, 1, 3, 5, 2, 3, 4 };
    set<int> s;

    for (int num : nums) {
        s.insert(num);  // set은 중복을 자동으로 제거함
    }

    cout << "set에 저장된 값들 (자동 정렬됨): ";
    for (int val : s) {
        cout << val << " ";
    }

    return 0;
}