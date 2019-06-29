#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문제 이해 어려움.. 인덱스에 해당하는 배열값이 인덱스보다 작거나 같으면 
int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for(int i=0; i<citations.size(); i++) {
        if(i >= citations[i])
            break;
        answer++;
    }
    
    return answer;
}