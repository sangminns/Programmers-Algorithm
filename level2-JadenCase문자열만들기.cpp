#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool check = false;
    if(s[0] >= 97 && s[0] <= 122)
        s[0] -= 32;
    for(int i=1; i<s.length(); i++) {
        if(s[i] == ' ') {
            check = true;
            continue;
        }
        if(check) {
            if(s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
            check = false;
        } else {
            if(s[i] >= 65 && s[i] <= 90) 
                s[i] += 32;
        }
    }
    answer = s;

    return answer;
}