#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string str) {
        stack <char> s;
        for (int i=0;i<str.length();i++)
            if(str[i]== '(' or str[i]=='{' or str[i]=='[')
                s.push(str[i]);
            
            else if(str[i]== ')' or str[i]=='}' or str[i]==']')
                if(s.empty())
                    return false;
                
                else if(str[i]==')' && s.top() != '(')
                    return false;
                
                else if (str[i]=='}' && s.top() != '{')
                    return false;
                
                else if (str[i]==']' && s.top() != '[')
                    return false;
                
                else
                    s.pop();
        if (s.empty())
            return true;
        else
            return false;
    }

int main()
{
    string s = "({([{}])})";
    cout<<isValid(s)<<endl;
    
    return 0;
}