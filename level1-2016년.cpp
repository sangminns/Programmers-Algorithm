#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    if(a==1) {
        sum += b;
        if(sum%7==1) {
            answer += "FRI";
        } else if(sum%7==2) {
            answer += "SAT";
        } else if(sum%7==3) {
            answer += "SUN";
        } else if(sum%7==4) {
            answer += "MON";
        } else if(sum%7==5) {
            answer += "TUE";
        } else if(sum%7==6) {
            answer += "WED";
        } else {
            answer += "THU";
        }
    } else {
        for(int i=1; i<a; i++) {
            if(i==2) { // 29
                sum += 29;
            } else if ((i%2==1 && i<8)|| (i>7 && i%2==0)) { // 31
                sum += 31;
            } else { // 30
                sum += 30;
            }
        } 
        sum += b;
        if(sum%7==1) {
            answer += "FRI";
        } else if(sum%7==2) {
            answer += "SAT";
        } else if(sum%7==3) {
            answer += "SUN";
        } else if(sum%7==4) {
            answer += "MON";
        } else if(sum%7==5) {
            answer += "TUE";
        } else if(sum%7==6) {
            answer += "WED";
        } else {
            answer += "THU"; 
        }
    }
    
    return answer;
}