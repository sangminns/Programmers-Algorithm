#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
    int answer = 1;
    int tmp = 1;
    int len = s.length();
    for(int i=0; i<len; i++) {
        for(int j=len-1; j>=0; j--) {
            int left = i;
            int right = j;
            if(left == right) break;
            if(s[left] == s[right]) {
                tmp += 2;
                while(left < right) {
                    left++; right--;
                    if(left>=right) break;
                    else if(s[left] == s[right]) tmp += 2;
                    else {
                        tmp = 0;
                        break;
                    }
                }
                if(left != right) tmp--;
                if(tmp > answer) answer = tmp;
                tmp = 1;
                if(answer > len/2) break;
            }
        }
    }
    
    return answer;
}