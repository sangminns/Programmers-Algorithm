using namespace std;

// 1 2 3 5 8 .. 피보나치 수열 
long long solution(int n) {
    long long answer = 0;
    
    int arr[n];
    
    arr[0] = 1;
    arr[1] = 2;
    for(int i=2; i<n; i++) {
        arr[i] = (arr[i-1] + arr[i-2])%1234567;
    }
    
    answer = arr[n-1]%1234567;
    
    return answer;
}