#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    if(a>b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    while(b>a) {
        if(a%2==0) a = a/2;
        else a = a/2+1;
        if(b%2==0) b = b/2;
        else b = b/2+1;
        answer++;
    }
    
    return answer;
}