#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    int num = 0;
    int len = number.length();
    int tmp = k;
    while(k) {
        for(int i=0; i<number.length()-1; i++) {
            if(number[i] < number[i+1]) {
                number.replace(i, 1, "");
                k--;
                break;
            } else {
                num++;
            }
        }
        if(num==len-1) {
            number.replace(number.size()-tmp, tmp, "");
            break;
        }
    }
    
    return number;
}