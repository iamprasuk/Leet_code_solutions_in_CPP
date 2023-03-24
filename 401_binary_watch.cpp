#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<bitset>

using namespace std;

vector<string> readBinaryWatch(int turnedOn) {
    vector<string> result;
    for(int h=0;h<12;h++){
        for(int m=0;m<60;m++){
            bitset<6>bh(h);
            bitset<6>bm(m);
            if((bh.count())+(bm.count())==turnedOn){
                string ans;
                if(m>9){
                    stringstream ss;
                    ss<<h<<":"<<m;
                    ans = ss.str();
                }
                else{
                    stringstream ss;
                    ss<<h<<":0"<<m;
                    ans = ss.str();
                }
                result.push_back(ans);
            }
        }
    }
    return result;
}

int main(){
    int turnedOn;
    cout<<"Enter the number of LED should be on --> ";
    cin>>turnedOn;
    vector<string> ans = readBinaryWatch(turnedOn);
    for(string & i : ans){
        cout<<i<<", ";
    }
    cout<<endl;
    return 0;
}
