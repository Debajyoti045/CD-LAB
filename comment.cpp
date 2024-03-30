#include <bits/stdc++.h>
using namespace std;
bool multiLineComment(string s){
     bool firstPart = false;
     for(int i=0;i+1<s.size();i++){
        if(s[i]=='/' && s[i+1]=='*'){
           firstPart = true;
        }
        else if(firstPart && s[i]=='*' && s[i+1]=='/'){
            return true;
        }
     }
     return false;
}
bool singleLineComment(string s){
    for(int i=0;i+1<s.size();i++){
        if(s[i]=='/' && s[i+1]=='/') return true;
    }
    return false;
}
int main()
{
    string s;
    cout<<"Enter program:"<<endl;
    getline(cin, s);
    bool multiLine = multiLineComment(s);
    bool singleLine = singleLineComment(s);
    if(multiLine){
        cout<<"It is a Multiline Comment"<<endl;
    }
    if(singleLine){
        cout<<"It is a singleLine Comment"<<endl;
    }
    if(!multiLine && !singleLine) cout<<"It is not a comment"<<endl;
    return 0;
}