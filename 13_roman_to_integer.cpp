#include<iostream>
#include<map>
using namespace std;

int romanToInt(string s) {
    map<char,unsigned long int> mp;
    // first we assign the values of the roman main roman numbers in the map which store key value pairs
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    //result variable stores the value of last character of given roman number from the map
    unsigned long int result= mp[s.at(s.size()-1)];
    signed long int index;
    
    // for loop runs in reverse direction and from the second last character
    for(index=s.size()-2;index>=0;index--){
        
        // if ith element is less than the i+1 element we subtract the value of ith element from the result value 
        if(mp[s.at(index)]<mp[s.at(index+1)]){
            result = result - mp[s.at(index)];
        }
        
        // if value is equal we add the value of ith element in the result
        else if (mp[s.at(index)] == mp[s.at(index+1)]){
            result = result + mp[s.at(index)];
        }
        
        // if value is greater we add the value of ith element in the result
        else{
            result = result + mp[s.at(index)];
        }        

    }
    return result;
}

int main()
{
    string s = "VIII";
    int a = romanToInt(s);
    cout<<a<<endl;    
    return 0;
}

/*  Explaination of upper code

-> s = "VIII" 
-> result store the value of last character means value of I, and value of I in the map is 1.
   so,
-> result = 1
->then length of s is 4 so i stores the value 4 - 2 = 2,
-> loop start from index 2 
-> first condition check index 2 element which is I its value is less than to the 
   value of element of index 3 which is I but both value is equal so second condition is true
   then result become result = 1+1 = 2
-> now index is 1 again if compare index 1 element and index 2 element again its value equal
   then result = 2 + 1 =3
-> now index is 0 again it compare index 0 and index 1 element but now index 0 is V its value is 5
   and index 1 is I its value is 1 now else condition is execute where result = 3 + 5 = 8.
-> answer is 8

*/