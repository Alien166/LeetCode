#include<bits/stdc++.h>
using namespace std;
bool  arePaired(char open, char close)
{
    if(open=='(' && close==')')
    {
        return true ;
    }
    else if(open=='{' && close=='}'){
        return true;
    }
    else if( open=='[' && close==']')
    {
        return true;
    }else
        return false;
}


bool areBalanced(string exp)
{
    stack<char>st;
    for(int i=0;i<exp.size();++i){
        if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
        {
            st.push(exp[i]);
        }
        else if(exp[i]=='}' || exp[i]==')' || exp[i]==']')
        {
            if(st.empty() || !arePaired(st.top(),exp[i])){
               return false;
            }
            else
            st.pop();
        }
    }
    return st.empty()?true : false;

}
int main()
{
 string exp;
 cin>>exp;
 if(areBalanced(exp)){
     cout<<"Balanced exp"<<endl;
 }else{
     cout<<"Un Balanced exp "<<endl;
 }
    return 0;
}
