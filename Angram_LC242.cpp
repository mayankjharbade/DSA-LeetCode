#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b){
        return true;
    }
    return false;
}
int main() {
    string a="narsmt";
    string b="ranmts"; 

    if (anagram(a ,b)==true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}