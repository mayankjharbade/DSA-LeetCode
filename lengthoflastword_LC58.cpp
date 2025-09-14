#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) {
    int length=0;
    bool result=false;
    for(int i=s.length()-1;i>=0;i--){
    if(s[i]!=' '){
        length++;
        result=true;
    }
    else if(result==true) return length;
    }
    return length;
}

int main(){
    string s="   fly me   to   the moon  ";

    cout<<lengthOfLastWord(s);

    return 0;
    
}