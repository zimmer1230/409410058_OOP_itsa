#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int round;
    cin>>round;
    vector<int> FerrisWheel;
    while(round--){
        int left,right,cars;
        cin>>left>>right>>cars;
        for(int i=0;i<cars;i++){
            FerrisWheel.push_back(i+1);
        }
        int cur_cars = cars;
        int cur_pos=0;
        int toward=1;
        while (cur_cars>0)
        {
            // for(auto a:FerrisWheel){
            //     cout<<a<<" ";
            // }
            //cout<<endl;   
            if(toward==1){
            cur_pos = ( cars+ ((cur_pos + right)%cars))%cars;
            if(cur_pos>=cars)
                cerr<<"err"<<endl;
            if(cur_cars==1){
                cout<<FerrisWheel[cur_pos]<<endl;
                //cout<<"cur_pos is "<<cur_pos<<endl;
                break;
            }
            FerrisWheel[cur_pos]=-1;
            cur_cars--;
            toward*=-1;
            }
            else{
                cur_pos = (cur_cars+( (cur_pos - left)%cur_cars ))%cur_cars;
                if(cur_pos>=cars)
                    cerr<<"err"<<endl;
                if(cur_cars==1){
                    cout<<FerrisWheel[cur_pos]<<endl;
                    //cout<<"cur_pos is "<<cur_pos<<endl;
                    break;
                }
                FerrisWheel[cur_pos]=-1;
                cur_cars--;
                toward*=-1;
            }
        }
        FerrisWheel.clear();

    }





    return 0;
}