#include <string>
#include <vector>

using namespace std;
// 피보나치 수열과 원리가 같다. 
// C(N) = C(N-1) + C(N_2)
// C(N-1) : 가장 오른쪽에 세워진 막대 1개 제거
// C(N-2) : 가장 오른쪽에 세워진 막대 2개 제거
int solution(int n) {
    int answer = 0;
    if(n<3) answer = n;
    else {
        int a = 1; int b = 2;
        for(int i=3; i<=n; i++) {
            answer = (a+b) % 1000000007;
            a = b;
            b = answer;
        }
    }
    
    return answer;
}