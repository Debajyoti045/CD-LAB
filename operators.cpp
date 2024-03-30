#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter any operator:"<<endl;
    cin>>s;
    switch(s[0]){
        case '>': {
            if(s.size()==2 && s[1]=='=') cout<<"Greater Than Equal"<<endl;
            else if(s.size()==2 && s[1]=='>') cout<<"Right Shift"<<endl;
            else if(s.size()==1) cout<<"Greater Than"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '<': {
            if(s.size()==2 && s[1]=='=') cout<<"Less Than Equal"<<endl;
            else if(s.size()==2 && s[1]=='<') cout<<"Left Shift"<<endl;
            else if(s.size()==1) cout<<"Less Than"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '=':{
            if(s.size()==2 && s[1]=='=') cout<<"Equal to"<<endl;
            else if(s.size()==1) cout<<"Assignment"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '!':{
             if(s.size()==2 && s[1]=='=') cout<<"Not equal to"<<endl;
             else if(s.size()==1) cout<<"NOT"<<endl;
             else cout<<"Invalid"<<endl;
             break;
        }
        case '&':{
            if(s.size()==2 && s[1]=='&') cout<<"Logical AND"<<endl;
            else if(s.size()==1) cout<<"AND"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '|':{
            if(s.size()==2 && s[1]=='|') cout<<"Logical OR"<<endl;
            else if(s.size()==1) cout<<"OR"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '~':{
            if(s.size()==1) cout<<"Negation"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '^':{
             if(s.size()==1) cout<<"XOR"<<endl;
             else cout<<"Invalid"<<endl;
             break;
        }
        case '+':{
             if(s.size()==2 && s[1]=='+') cout<<"Increment"<<endl;
             else if(s.size()==1) cout<<"Addition"<<endl;
             else cout<<"Invalid"<<endl;
             break;
        }
        case '-':{
             if(s.size()==2 && s[1]=='-') cout<<"Decrement"<<endl;
             else if(s.size()==1) cout<<"Subtraction"<<endl;
             else cout<<"Invalid"<<endl;
             break;
        }
        case '*':{
            if(s.size()==1) cout<<"Multiplication"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '/':{
            if(s.size()==1) cout<<"Division"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '%':{
            if(s.size()==1) cout<<"Modulo"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        case '?':{
            if(s.size()==2 && s[1]==':') cout<<"Ternary"<<endl;
            else cout<<"Invalid"<<endl;
            break;
        }
        default: cout<<"Invalid"<<endl;
    }
    return 0;
}