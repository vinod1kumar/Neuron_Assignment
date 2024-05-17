#include<bits/stdc++.h>

using namespace std;

int main(){

    string result;
    cin>>result;

    string input;
    cin>>input;

    string key = input;

    for(int i=0;i<result.length();i++){
        if(input[i]=='*'){
            continue;
        }
        key[i] = (result[i] - input[i] + 26)%26;
    }

    cout<<key<<endl;



    return 0;
}