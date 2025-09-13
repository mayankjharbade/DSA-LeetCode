#include <iostream>
#include <string>
using namespace std;

bool isAN(char ch){
    if((ch>='0' && ch<='9')  || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st=0,end=s.length()-1;
    while(st<end){
        if(!isAN(s[st])){
            st++;
            continue;
        }
        if(!isAN(s[end])){
            end++;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}