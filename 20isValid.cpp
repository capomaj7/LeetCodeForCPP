#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char>chararray;
        stack<char>charstack;
        //开始的时候assign函数不会使用
        chararray.assign(s.begin(),s.end());
        int length=chararray.size();
        for(int i=0;i<length;i++){
            if(chararray[i]=='{'||chararray[i]=='('||chararray[i]=='['){
                charstack.push(chararray[i]);
            }
            else if(chararray[i]=='}'){
                if(charstack.empty())return false;
                char newchar=charstack.top();
                if(newchar!='{')return false;
                charstack.pop();
            }
            else if(chararray[i]==']'){
                if(charstack.empty())return false;
                char newchar=charstack.top();
                if(newchar!='[')return false;
                charstack.pop();
            }
            else if(chararray[i]==')'){
                if(charstack.empty())return false;
                char newchar=charstack.top();
                if(newchar!='(')return false;
                charstack.pop();
            }
        }
        return charstack.empty()?true:false;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}