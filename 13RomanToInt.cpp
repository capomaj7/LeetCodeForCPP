#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
     int romanToInt(string s) {
        char *chararray;
       //string::npos是机器上最大的正整数，常用来表示string的结束位置
        size_t length = s.copy(chararray,string::npos,0);
        chararray[length]='\0';
        for(int i=0;i<length;i++)
        cout<<chararray[i]<<endl;
        return chararray;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    char *chararray;
    string ss="hello";
    chararray=s.romanToInt(ss);
    for(int i=0;chararray[i]!='\0';i++)
    cout<<chararray[i]<<endl;
    return 0;
}