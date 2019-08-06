#include <vector>

using namespace std;

unsigned long fac(int x, int y, int z) {
    long a = 1;
    long b = 1;
    for(int i=x; i>z; i--) {
        a *= i;
    }
    for(int i=1; i<=y; i++) {
        b *= i;
    }
    return a/b;
}

int solution(int n) {
    unsigned long answer = 0;

    answer = fac(2*n, n+1, n);
    
    return answer;
}