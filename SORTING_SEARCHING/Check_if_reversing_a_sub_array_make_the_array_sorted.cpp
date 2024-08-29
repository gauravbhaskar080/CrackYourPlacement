#include<bits/stdc++.h>
using namespace std;

bool sortArr(vector<int>& arr){
    int x = -1;
    int y = -1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i] > arr[i+1]){
            if(x==-1){
                x=i;
            }
            y=i+1;
        }
    }
    if(x!=-1){
        reverse(arr.begin()+x,arr.begin()+y+1);
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,4,5,3};
    if(sortArr(arr)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}