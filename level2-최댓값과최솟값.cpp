#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string str;
    vector<int> arr;
    while(ss >> str) {
        arr.push_back(stoi(str));
    }
    sort(arr.begin(), arr.end());
    answer += to_string(arr[0]) + " " + to_string(arr[arr.size()-1]);
    
    return answer;
}