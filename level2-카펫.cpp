#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int red) {
    vector<int> answer;
    int len = brown + red;
    int a = 0;
    int b = 0;
    for(int i=3; i<=sqrt(len); i++) {
        if(len/i - len/(len/i) < 0) {
            break;
        } else {
            int tmp_a = len/i;
            int tmp_b = len/(len/i);
            if(len%i==0 && tmp_a*2 + tmp_b*2 - 4 == brown) {
                a = len/i;
                b = len/a;
            }
        }
    }
    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}