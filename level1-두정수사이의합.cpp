#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a < b) {
        for(;a<=b;a++) {
            answer += a;
        }    
    } else {
        for(;b<=a;b++) {
            answer += b;
        }
    }
    
    return answer;
}