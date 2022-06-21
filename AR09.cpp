#include<iostream>
#include <vector>
#include<string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    vector<int> arr;
    string input;
    stringstream ss;
    getline(cin,input);
    int pos=0;
    while (pos!=string::npos)
    {
        arr.push_back( stoi(input) );
        pos=input.find(",");
        input.erase(0,pos+1);
    }
    string big, small;
    sort(arr.begin(),arr.end());
    int arr_size=arr.size();
    for(int i=0;i<arr_size;i++){
        ss>>arr[i];
        small+=(to_string(arr[i])) ;
        big+=( to_string(arr[arr_size-1-i]) );
    }
    int big_int = stoi(big);
    int small_int = stoi(small);
    cout<<big_int-small_int<<endl;
    
    



    return 0;
}