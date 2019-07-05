#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int tmp;
    priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
    
    for(int i=0; i<scoville.size(); i++) {
        pq.push(scoville[i]);
    }
    while(pq.top()<K) {
        tmp = pq.top();
        pq.pop();
        tmp = tmp + (pq.top()*2);
        pq.pop();
        pq.push(tmp);
        answer++;
        if(pq.size()==1 && pq.top()<K) {
            return -1;
        }
    }
    
    return answer;
}