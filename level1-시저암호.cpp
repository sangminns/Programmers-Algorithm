#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ')
            continue;         
        if(s[i] >= 65 && s[i] <= 90) {
            if(s[i]+n > 90) {
                s[i] -= 26;
            }
        } else {
            if(s[i]+n > 122) {
                s[i] -= 26;
            }
        }
        s[i] = s[i] + n;
        
    }
    
    answer = s;
    
    return answer;
}