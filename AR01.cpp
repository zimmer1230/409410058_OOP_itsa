#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string input;
    string num;
    vector <int> arr;
    while(  getline(cin,input)  ){
        int pos=0;
        while (pos!=string::npos)
        {
            arr.push_back( stoi(input) );
            pos=input.find(" ");
            input.erase(0,pos+1);
        }
        reverse(arr.begin(),arr.end());
        int arr_size = arr.size();
        for(int i=0;i<arr_size;i++){
            cout<<arr[i];
            if(i==arr_size-1)
                cout<<endl;
            else
                cout<<" ";
        }
        arr.clear();
    }
        

    return 0;
}
