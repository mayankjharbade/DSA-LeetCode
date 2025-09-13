#include<iostream>
#include<string>
using namespace std;

bool isSubsequence(string s, string t) {
    int s1=0,t1=0;
    while(s1<s.length() && t1<t.length()){
        if(s[s1]==t[t1]){
            s1++;
        }
        t1++;
    }
    if(s1==s.length()){
        return true;
    }
    return false;
}

int main(){
    string a="abc";
    string b="ajfbsjhcd";

    if(isSubsequence(a,b)==true){
        cout<<"True";
    }
    else{
        cout<<"false";
    }

    return 0;
}