#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,A=0,D=0;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<s.size();i++){
        if (s[i]=='A'){
            A++;
        }
        else
            D++;
    }
    if(A>D){
        cout<<"Anton\n";
    }
    else if (D>A){
        cout<<"Danik\n";
    }
    else
        cout<<"Friendship\n";



    return 0;
}


