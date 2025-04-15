#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<string> v = { "mu la", "kal lo", "mu lo" };
    multimap<string, string> m;

    for (string entry : v) {
        istringstream ss(entry);
        string key, value;
        ss >> key >> value;
        m.insert({ key, value });  // multimap은 insert 사용
    }

    // 결과 출력
    for (auto pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
