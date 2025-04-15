#include <iostream>
#include <map>
#include <sstream>   // istringstream
#include <string>
#include <vector>

using namespace std;

int main() {
    // ���ڿ� �迭
    string words[] = { "apple", "banana", "apple", "orange", "banana", "apple" };

    // map ���� (key: string, value: int)
    map<string, int> wordCount;

    // �� �ܾ��� ���� Ƚ���� ī��Ʈ
    for (string word : words) {
        wordCount[word]++;  // key�� ������ 0���� ������
    }

    // ��� ���
    for (auto pair : wordCount) {
        cout << pair.first << ": " << pair.second << "�� ����" << endl;
    }

    string words2[] = { "orange juice", "banana candy" };
    vector<string> v = { "mu la", "kal lo", "mu lo"}; // ���� �������� key value ������
    //vector<string> v = { "mu la", "mu la" }; //�ߺ��� ����

    map<string, string> m;

    for (string entry : v) {
        istringstream ss(entry);
        string key, value;

        ss >> key >> value;  // ���� �������� �� �ܾ� ����

        m[key] = value;
    }
    
    // ��� ���
    for (auto pair : m) {
        cout << pair.first << "->" << pair.second << endl;
    }
    return 0;
}