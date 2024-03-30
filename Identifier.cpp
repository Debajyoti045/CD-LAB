#include <bits/stdc++.h>
using namespace std;
bool isKeyword(string s){
    static const unordered_set<string> keywords = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };
    
    return keywords.find(s) != keywords.end();
}
bool isValid(string s){
    if(s.empty()) return false;
    if(!((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') || (s[0]=='_'))) return false;
    if(isKeyword(s)) return false;
    for(int i=1;i<s.size();i++){
        if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]=='_') && (s[i]>='0' && s[i]<='9'))){
            return false;
        }
    }
    return true;
} 
int main()
{
    string s;
    cout<<"Enter the identifier Name:"<<endl;
    cin>>s;
    bool valid = isValid(s);
    if(valid){
        cout<<"Valid Identifier"<<endl;
    }
    else{
        cout<<"Invalid Identifier"<<endl;
    }
    return 0;
}