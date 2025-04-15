#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<string> v = { "mu la", "kal lo", "mu lo" };
    map<string, vector<string>> m;

    for (string entry : v) {
        istringstream ss(entry);
        string key, value;
        ss >> key >> value;
        m[key].push_back(value);  // key�� �ش��ϴ� vector�� �߰�
    }

    // ��� ���
    for (auto pair : m) {
        cout << pair.first << " -> ";
        for (string val : pair.second) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

// map �����ڽ�Ʈ : 20m