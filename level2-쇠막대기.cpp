#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<char> st;
    for(int i=0; i<arrangement.length(); i++) {
        if(arrangement[i]=='(') {
            st.push(arrangement[i]);
        } else {
            if(!st.empty()) {
                st.pop();
                if(arrangement[i-1]=='(') { // 괄호가 레이저인지 파이프의 끝인지 구별
                    answer += st.size();
                } else {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}