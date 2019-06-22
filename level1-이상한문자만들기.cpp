#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool check = true;
    for(int i=1; i<=s.length(); i++) {
        if(s[i-1]==' ') {
            answer += " ";
            check = true;
        } else {
            if(check) {
                answer += toupper(s[i-1]);
                check = false;
            } else {
                answer += tolower(s[i-1]);       
                check = true;
            }      
        }
    }
    
    return answer;
}