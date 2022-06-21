#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> arr;
    int num;
    for(int i=0;i<6;i++) 
    {
        cin>>num;
        arr.push_back(num);
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<6;i++){
        cout<<arr[i];
        if(i==5)
            continue;
        cout<<" ";
    }
    cout<<endl;

    return 0;   

}