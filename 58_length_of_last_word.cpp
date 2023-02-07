#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) {
        string space_ch = " ";
        int count =0;
        for(int i=s.size()-1; i>=0;i--){
            if (s[i]!=space_ch.at(0)){
                count +=1;
            }
            else{
                if(count==0 && s.at(i)==space_ch.at(0)){
                    continue;
                }
                else{
                    return count;
                }
            }
        }
        return count;
    }



int main()  {
    string s = "the moon is white    ";
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}