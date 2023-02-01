#include<iostream>
#include <string>
#include<vector>
using namespace std;


string longestCommonPrefix(vector<string>& words) {
    string first_word = words.at(0);
	string common_prefix = "";
	for(int i=0; i<first_word.size();i++){ 
		int count =0; // it counts the total words present in array.
		for(int j=1; j<words.size();j++){
			if(first_word.at(i) == words[j][i]){
				count += 1;
			}
		}
		if (count+1 == words.size()){ 
			common_prefix += first_word.at(i); 
		}
		else{
			return common_prefix;
		}
	}
	return common_prefix;
}

int main()
{
    vector <string> words = {"run", "running", "runner"};
    string ans = longestCommonPrefix(words);
    cout<<ans<<endl;
    return 0;
}