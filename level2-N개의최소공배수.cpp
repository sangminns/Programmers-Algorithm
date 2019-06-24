#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int mod = a%b;
    while(mod > 0) {
        a = b;
        b = mod;
        mod = a%b;
    }
    return b;
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int solution(vector<int> arr) {
    int answer = 0;
    
    if(arr.size()==1) 
        answer = arr[0];
    else {
        answer = lcm(arr[0], arr[1]);
        for(int i=2; i<arr.size(); i++) {
            answer = lcm(answer, arr[i]);
        }   
    }
    
    return answer;
}