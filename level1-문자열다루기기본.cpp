#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4 || s.length()==6) {
        for(int i=0; i<s.length(); i++) {
            if(int(s[i])>=48 && int(s[i])<=57)
                answer = true;
            else {
                answer = false;
                break;
            }
        }
    } else {
        answer = false;
    }
    return answer;
}