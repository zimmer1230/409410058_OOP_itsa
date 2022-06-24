#include<iostream>
#include<string>
#include <vector>
#include <algorithm>


using namespace std;

void print_result(int r){
    if(r==1||r==-4){
        cout<<"贏";
    }
    else if(r==-1||r==4){
        cout<<"輸";
    }
    else{
        cout<<"和";
    }

}

int main(){
    string A,B;
    cin>>A>>B;
    for(int i=0;i<A.size();i++){
        print_result(A[i]-B[i]);
    }



    return 0;
}