#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int tmp = 0;
    while(n>0) {
        tmp = n%3;
        n /= 3;
        if(tmp==0) n -= 1;
        if(tmp==0) answer = "4" + answer;
        else if(tmp==1) answer = "1" + answer;
        else answer = "2" + answer;
    }
    
    return answer;
}