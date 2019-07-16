#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    
    priority_queue<int> pq;
    int idx = 0;
    int day = 0;
    while(day < k) {
        day += stock;
        stock = 0;
        for(int i=idx; i<dates.size(); i++) {
            if(dates[i] <= day) {
                pq.push(supplies[i]);
                idx = i+1;
            }
        }
        stock += pq.top();
        pq.pop();
        answer++;
    }
    answer--;
    return answer;
}