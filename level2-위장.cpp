#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    int tmp = 1;
    vector<string> check;
    vector<int> countArr;
    
    for(int i=0; i<clothes.size(); i++)
        check.push_back(clothes[i][1]);
    sort(check.begin(), check.end());
    
    countArr.push_back(1);
    for(int i=1; i<check.size(); i++) {
        if(check[i-1]!=check[i]) {
            countArr.push_back(1);
            tmp = 1;
        } else {
            tmp++;
            countArr[countArr.size()-1] = tmp;
        }
    }
    // 모든 종류 a, b, c에 따라서 모든 경우의 수 : (a+1)*(b+1)*(c+1)-1
    for(int i=0; i<countArr.size(); i++) {
        answer *= countArr[i] + 1;
    }   
    answer -= 1;
    
    return answer;
}