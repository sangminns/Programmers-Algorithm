#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// 정렬 기준 
bool compare(int a, int b) {
    return stoi(to_string(b)+to_string(a)) < stoi(to_string(a)+to_string(b));
}

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(), numbers.end(), compare);
    
    for(int i=0; i<numbers.size(); i++) {
        if(numbers[0] == 0) {
            answer += "0";
            break;
        }
        answer += to_string(numbers[i]);
    }
    
    return answer;
}