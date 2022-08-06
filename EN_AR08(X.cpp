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
    getline(cin,input);
    int pos=0;
    while (pos!=string::npos)
    {
        arr.push_back( stoi(input) );
        pos=input.find(" ");
        input.erase(0,pos+1);
    }
    int arr_size=arr.size();
    int sum=0;
    for(int i=0;i<arr_size;i++){
        if (arr[i]>sum)
        {
            sum=arr[i];
        }
        int sigma_i_j=arr[i];
        for(int j=i+1;j<arr_size;j++){
            sigma_i_j+=arr[j];
            if(sigma_i_j>sum){
                sum=sigma_i_j;
            }
        }
    }
    cout<<sum<<endl;
        
        

    return 0;
}
