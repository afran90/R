#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "aabccaaa";
    int t=1;
    for (int i=1;i<s.length();i++){
            if (s[i-1]==s[i]){
                t++;}
            else{
            cout<<s[i-1]<<t;
            t=1;}


    }
    cout<<s[s.length()-1]<<t;
    return 0;
}



