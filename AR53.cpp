#include<iostream>
#include<string>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int n;
    cin>>n;
    int input;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>input;
        arr.push_back(input);
    }
    sort(arr.begin(),arr.end());
    for(auto a:arr){
        cout<<a<<endl;
    }



    return 0;
}