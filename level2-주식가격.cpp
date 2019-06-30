#include <string>
#include <vector>

using namespace std;

// 주식의 값이 감소한 시점에서 시간을 기록..
vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0; i<prices.size()-1; i++) {
        int tmp = 0;
        for(int j=i+1; j<prices.size(); j++) {
            if(prices[i] > prices[j]) {
                tmp++;
                break;
            } else {
                tmp++;
            }
        }
        answer.push_back(tmp);
    }
    answer.push_back(0);
    
    return answer;
}
