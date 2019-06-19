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

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd_result = gcd(n, m);
    int lcm_result = lcm(n, m);
    answer.push_back(gcd_result);
    answer.push_back(lcm_result);
    return answer;
}
