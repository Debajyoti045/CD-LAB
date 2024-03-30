#include <bits/stdc++.h>
#include <fstream>
using namespace std;
bool isOperator(char ch) {
    static const unordered_set<char> operators = {'+', '-', '*', '/', '%', '='};
    return operators.find(ch) != operators.end();
}

bool isKeyword(string word) {
    static const unordered_set<string> keywords = {
        "switch", "typedef", "union", "unsigned", "void", "long", "register", "short", "signed",
        "sizeof", "static", "volatile", "while", "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "enum", "extern", "return", "struct", "float", "for", "goto",
        "if", "int", "else"
    };
    return keywords.find(word) != keywords.end();
}
bool isValid(string s){
    if(s.empty()) return false;
    if(!((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z') || (s[0]=='_'))) return false;
    for(int i=1;i<s.size();i++){
        if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]=='_') && (s[i]>='0' && s[i]<='9'))){
            return false;
        }
    }
    return true;
}
bool isConstant(string word){
    for(auto it:word){
        if(!(it>='0' && it<='9')) return false;
    }
    return true;
}
int main()
{
    ifstream inputFile("test.txt");
    if(!inputFile){
        cout<<"file not opened!"<<endl;
    }
    else{
        char ch;
        string buffer;
       while(inputFile.get(ch)){
          if(isOperator(ch)){
            cout<<ch<<" is an operator"<<endl;
          }
          else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ||(ch=='_')){
              buffer+=ch;
          }
          else if(!buffer.empty()){
             if(isKeyword(buffer)) cout<<buffer<<" is a keyword"<<endl;
             else if(isConstant(buffer)) cout<<buffer<<" is a constant"<<endl;
             else if(isValid(buffer)) cout<<buffer<<" is a identifier"<<endl;
             else {
                cout<<buffer<<" Error not a valid identifier"<<endl;
                break;
             }
             buffer.clear();
          }
       }
       inputFile.close();
    }
    return 0;
}