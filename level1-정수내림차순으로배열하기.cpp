#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> arr;
    while(n>0) {
        arr.push_back(n%10);
        n /= 10;
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    for(int i=0; i<arr.size(); i++) {
        answer += arr[i] * pow(10,arr.size()-i-1);
    }
    
    return answer;
}