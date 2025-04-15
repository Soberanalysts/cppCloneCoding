#include <iostream>
#include <map>
#include <sstream>   // istringstream
#include <string>
#include <vector>

using namespace std;

int main() {
    // 문자열 배열
    string words[] = { "apple", "banana", "apple", "orange", "banana", "apple" };

    // map 생성 (key: string, value: int)
    map<string, int> wordCount;

    // 각 단어의 등장 횟수를 카운트
    for (string word : words) {
        wordCount[word]++;  // key가 없으면 0부터 시작함
    }

    // 결과 출력
    for (auto pair : wordCount) {
        cout << pair.first << ": " << pair.second << "번 등장" << endl;
    }

    string words2[] = { "orange juice", "banana candy" };
    vector<string> v = { "mu la", "kal lo", "mu lo"}; // 띄어쓰기 기준으로 key value 나누기
    //vector<string> v = { "mu la", "mu la" }; //중복값 실험

    map<string, string> m;

    for (string entry : v) {
        istringstream ss(entry);
        string key, value;

        ss >> key >> value;  // 공백 기준으로 두 단어 추출

        m[key] = value;
    }
    
    // 결과 출력
    for (auto pair : m) {
        cout << pair.first << "->" << pair.second << endl;
    }
    return 0;
}