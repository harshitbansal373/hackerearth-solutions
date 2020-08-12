/*There are x number of girls and they rolled a dice in turns one after another.

If the number on the dice is 6, then the dice will be rolled again until she get a number other than 6.

Since you know the sequence of numbers which the dice shows when rolled each time, you have to find what is the total number of girls or if the sequence is invalid.

Input format

A single line that contains a string s denoting the sequence of numbers the dice rolls on written as string.

Output format

If the sequence is valid print the number of girls  
If the sequence is invalid print -1

SAMPLE INPUT 
3662123

SAMPLE OUTPUT 
5
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=0;
    if(s[s.length()-1]=='6'){
        cout<<"-1";
    }
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]!='6')
                c+=1;
        }
        cout<<c;
    }
    return 0;
}
