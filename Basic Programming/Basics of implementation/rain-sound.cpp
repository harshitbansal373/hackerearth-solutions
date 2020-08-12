/*You like the sound of rain only if the sound ranges from l to r units. Every cloud makes s unit of sound. Determine the minimum and the maximum number of clouds that can produce the sound in the provided range.

Input format

First line: One integer t denoting the number of test cases
Next t lines: Three integers l,r and s denoting the provided range of the rain sound and the units of sound produced by each cloud
Output format

In t lines, print two space-separated integers that represent the minimum and the maximum number of the clouds that can produce the sound in the provided range.

Note: Print -1 -1 if no answer is available.

SAMPLE INPUT 
3
5 10 3
7 12 4
50 60 1

SAMPLE OUTPUT 
2 3
2 3
50 60
*/

//code is here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int l,r,s;
        cin>>l>>r>>s;
        l=(l-1)/s+1;
        r=r/s;
        if(l>r)
            cout<<"-1 -1"<<endl;
        else
            cout<<l<<" "<<r<<endl;
    
    }
}
