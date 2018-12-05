#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main(int argc, char const *argv[])
{
    string str="hello";
    vector<char>ss;
    //ss.resize(str.size());
    ss.assign(str.begin(),str.end());
    for(int i=0;i<ss.size();i++)
    cout<<ss[i]<<endl;

    return 0;
}