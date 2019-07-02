#include <string>
#include <vector>

using namespace std;

// DP - Bottom-Up (Memoization) 활용 
long long solution(int N) {
    long long answer = 0;
    
    long arr[N];
    
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<N; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    if(N==1)
        answer = 4;
    else if(N==2)
        answer = 6;
    else
        answer = (arr[N-1]+arr[N-2])*2 + (arr[N-2]+arr[N-3])*2;
    
    return answer;
}