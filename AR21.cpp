#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include<cmath>

using namespace std;
double average(vector<int> data){
    int size=data.size();
    double sum=0;
    for(int i=0;i<size;i++){
        sum+=data[i];
    }
    return sum/size;
}
double average(vector<double> data){
    int size=data.size();
    double sum=0;
    for(int i=0;i<size;i++){
        sum+=data[i];
    }
    return sum/size;
}


int main(){
    int student_num;
    cin>>student_num;
    vector <vector<int>> score_list;
    int score_1,score_2,score_3;
    for(int i=0;i<student_num;i++){
        cin>>score_1>>score_2>>score_3;
        score_list.push_back( {score_1,score_2,score_3} );
    }    
    vector <double> output;
    vector <double> tmp;
    for(int i=0;i<student_num;i++){
        tmp.push_back( floor(10 * average( score_list[i] )+0.5)/10 );
    }
    output.push_back( average(tmp) );
    for(int i=0;i<3;i++){
        tmp.clear();
        for(int j=0;j<student_num;j++){
            tmp.push_back( score_list[j][i] );
        }
        output.push_back( floor(10 * average(tmp)+0.5)/10 );
    }
    for(auto a=output.begin();a!=output.end();a++){
        cout<<fixed<<setprecision(1)<<*a;
        if(a+1==output.cend()){
            cout<<endl;
        }
        else{
            cout<<" ";
        }
    }


    return 0;
}