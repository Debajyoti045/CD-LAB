#include <bits/stdc++.h>
using namespace std;

string s;
int i = 0;

void procedureE();
void procedureEPrime();
void procedureT();
void procedureTPrime();
void procedureF();

void procedureE(){
    procedureT();
    procedureEPrime();
}
void procedureEPrime(){
    if(s[i]=='+'){
        i++;
        procedureT();
        procedureEPrime();
    }
}
void procedureT(){
    procedureF();
    procedureTPrime();
}
void procedureTPrime(){
    if(s[i]=='*'){
        i++;
        procedureF();
        procedureTPrime();
    }
}
void procedureF(){
    if(s[i]=='('){
        i++;
        procedureE();
        if(s[i]!=')') throw runtime_error("Expected )");
    }
    else if(s[i]>='a' && s[i]<='z'){
        i++;
    }
    else{
        throw runtime_error("Expected ( or id");
    }
}
int main()
{
    getline(cin,s);
    i = 0;
    procedureE();
    if(i == s.size()){
        cout<<"accepted"<<endl;
    }
    else{
        cout<<"Not Accepted"<<endl;
    }
    return 0;
}