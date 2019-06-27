#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    bool check = true;
    for(int i=1; i<words.size(); i++) {
        for(int j=0; j<i; j++) {
            if(words[i].compare(words[j])==0)
                check = false;
        }
        
        if(words[i-1][words[i-1].length()-1] != words[i][0] ||
          check == false) {
            answer.push_back(i%n+1);
            answer.push_back(i/n+1);
            break;
        }
        if(i==words.size()-1) {
            answer.push_back(0);
            answer.push_back(0);    
        }
    }

    return answer;
}