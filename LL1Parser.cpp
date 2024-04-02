#include <bits/stdc++.h>
using namespace std;
//Grammar:
     //E->TE'
     //E->+TE' | null
     //T->FT'
     //T'->*FT' | null
     //F->(E) | id

  // Assume:
//E'->J
//T'->K
//id->d


//Parsing Table
unordered_map<char,unordered_map<char,string>> parseTable = {
    {'E', {{'d', "TJ"}, {'(', "TJ"}}},
    {'J', {{'+', "+TJ"}, {'$', "e"}, {')', "e"}}},
    {'T', {{'d', "FK"}, {'(', "FK"}}},
    {'K', {{'*', "*FK"}, {'$', "e"}, {')', "e"}, {'+', "e"}}},
    {'F', {{'d', "d"}, {'(', "(E)"}}}
};
bool parseString(string s){
    stack<char>st;
    st.push('$');
    st.push('E');
    int i = 0; 
    while(!st.empty()){
        char topi = st.top();
        st.pop();
        if(topi=='$'){
            if(i<s.size() && s[i]=='$') return true;
            else return false;
        }
        else if(topi == s[i]) i++;
        else if(isupper(topi)){
            char nonTerminal = topi;
            char terminal = s[i];
            auto production = parseTable[nonTerminal];
            string p = production[terminal];
            if(p == "") return false;
            if(p == "e") continue;
            for(int j=p.size()-1;j>=0;j--){
                st.push(p[j]);
            }
        }
        else return false;
    }
    return false;
}
int main()
{ 
    string s;
    cout<<"Enter the input string:"<<endl; 
    cin>>s;
    s+='$';
    bool result = parseString(s);
    if(result){
        cout<<"String accepted by the LL1 parser"<<endl;
    }
    else{
        cout<<"string rejected by the LL1 parser"<<endl;
    }
    return 0;
}


//Input string : d+d*d