#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

int solution(string s) {
    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tmp = "";
    string ans = "";
    int answer = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9') ans += s[i];
        else {
            tmp += s[i];
            cout << tmp << " ";
            for(int j=0; j<10; j++){
                if (tmp.compare(a[j]) == 0) {
                    ans = ans + (char)(j + 48);
                    tmp = "";
                    break;
                }
            }
        }
    }
    int digit = 1;
    for(int i=ans.size() - 1; i>=0; i--){
        answer += (ans[i] - 48) * digit;
        digit *= 10;
    }
    cout << ans;
    
    return answer;
}
