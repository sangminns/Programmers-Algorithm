#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;

set<int> s;

void checkPrime(int num) {
    bool flag = false;

    if(num==2) {
        s.insert(num);
    } else {
        for(int i=2; i<num; i++) {
            if(num%i==0) {
                flag = false;
                break;
            } else 
                flag = true;
        }
        if(flag)
            s.insert(num);
    }
    return;
}

int solution(string numbers) {
    int answer;
    int len = numbers.length();
    sort(numbers.begin(), numbers.end());
    while(len--) {
        do {
            string str = "";
            for(int i=0; i<=len; i++) {
                str += numbers[i];
            }
            checkPrime(stoi(str));
        } while(next_permutation(numbers.begin(), numbers.end()));
    }
    answer = s.size();
    return answer;
}