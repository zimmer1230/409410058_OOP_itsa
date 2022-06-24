#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    int n;
    int input;
    cin>>n;
    vector<int> arr;
    while (n--)
    {
        cin>>input;
        arr.push_back(input);
    }
    int num=0;
    int arr_size=arr.size();
    for(int i=0;i<arr_size;i++){
        for(int j=i+1;j<arr_size;j++){
            if(arr[i]>2*arr[j])
                num++;
        }
    }
    cout<<num<<endl;
    
    



    return 0;
}