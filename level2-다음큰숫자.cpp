#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp = n;
    while(1) {
        string temp1 = bitset<7>(n).to_string();
        tmp += 1;
        string temp2 = bitset<7>(tmp).to_string();
        int cnt_a = 0;
        int cnt_b = 0;
        for(int i=0; i<7; i++) {
            if(temp1[i]=='1')
                cnt_a += 1;
            if(temp2[i]=='1')
                cnt_b += 1;
        }    
        if(cnt_a == cnt_b) {
            answer = tmp;
            break;   
        }
    }
    
    return answer;
}