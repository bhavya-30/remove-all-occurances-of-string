//given two string s1 and s2.remove all the substring s2 from s1.return s1 after removing all occurrences of s2

#include<iostream>
using namespace std;

string removeAllOcc(string s1,string s2)
{
    while(s1.length()!=0&&s1.find(s2)<s1.length())
    {
        s1.erase(s1.find(s2),s2.length());
    }
    return s1;
}
int main()
{
    string s1,s2;
    cout<<"enter the main string:";
    cin>>s1;
    cout<<"enter the substring:";
    cin>>s2;
    string ans=removeAllOcc(s1,s2);
    cout<<ans;
}