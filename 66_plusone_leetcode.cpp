#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int indx = digits.size()-1;
    while(indx>=0){
        if (digits.at(indx)<9){
            digits.at(indx) += 1;
            return digits;
        }
        else{
            digits.at(indx)= 0;
        }
        indx--;
    }
    digits.insert(digits.begin(),1);
    return digits;
}

int main()
{
    vector<int> num = {9,9,9};
    vector<int> number = plusOne(num);
    for(int & i : number){
        cout<<i<<" ";
    }
    return 0;
}