#include<iostream>
#include<string>
#include <vector>
#include <algorithm>


using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main(){
    string input;
    cin>>input;
    string rev_input = input;
    reverseStr(rev_input);
    if(input==rev_input)
        cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}