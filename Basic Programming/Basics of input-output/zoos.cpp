/*You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 2*x=y.

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.

SAMPLE INPUT 
zzzoooooo

SAMPLE OUTPUT 
Yes
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    string w;
    int c=0;
    cin>>w;
    for(int i=0;i<w.length();i++){
        if(w[i]=='z')
            c=c+1;
        else
            break;
    }
    if(2*c==w.length()-c)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
