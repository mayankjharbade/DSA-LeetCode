#include<iostream>
#include<vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
        int max=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>max){
                max=arr[i];
            }
            else{
                arr[i]=max;
            }
        }
        arr.erase(arr.begin());
        arr.push_back(-1);
        return arr;
    }

int main(){
    
    vector<int> arr={17,18,19,5,4,6,1};
    replaceElements(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}