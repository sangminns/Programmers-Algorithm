#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    for(int i=0; i<strings.size(); i++) {
        strings[i] = strings[i][n] + strings[i];
    }
    sort(strings.begin(), strings.end());
    for(int i=0; i<strings.size(); i++) {
        strings[i].replace(0, 1, "");
    }
    answer = strings;
    return answer;
}