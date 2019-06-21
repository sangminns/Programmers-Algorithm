#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> user1 = {5, 1, 2, 3, 4}; 
    vector<int> user2 = {5, 2, 1, 2, 3, 2, 4, 2}; 
    vector<int> user3 = {5, 3, 3, 1, 1, 2, 2, 4, 4, 5}; 
    int u1 = 0, u2 = 0, u3 = 0;
    for(int i=1; i<=answers.size(); i++) {
        if(answers[i-1]==user1[i%5]) u1++;
        if(answers[i-1]==user2[i%8]) u2++;
        if(answers[i-1]==user3[i%10]) u3++;
    }
    if(u1>u2 && u1>u3) answer.push_back(1);
    else if(u2>u1 && u2>u3) answer.push_back(2);
    else if(u3>u1 && u3>u2) answer.push_back(3);
    else if(u1==u2 && u1>u3) { 
        answer.push_back(1); 
        answer.push_back(2);
    } else if(u2==u3 && u2>u1) {
        answer.push_back(2); 
        answer.push_back(3);
    } else if(u1==u3 && u1>u2) {
        answer.push_back(1); 
        answer.push_back(3);
    } else {
        answer.push_back(1); 
        answer.push_back(2); 
        answer.push_back(3);
    }
    return answer;
}