#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    int cnt = 0;
    for(int i=0; i<progresses.size(); i++) {
        int days = 0;
        int tmp = progresses[i];
        while(tmp < 100) {
            tmp += speeds[i];
            days++;
        }
        q.push(days);
        if(q.front() < days) {
            answer.push_back(cnt);
            while(cnt!=0) {
                q.pop();
                cnt--;
            }
            cnt++;
        } else {
            cnt++;
        }
        if(i==progresses.size()-1)
            answer.push_back(cnt);
    }
      
    return answer;
}