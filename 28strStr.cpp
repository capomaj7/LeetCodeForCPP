#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    //暴力求解
/*     int strStr(string haystack, string needle) {
        if(needle=="")return 0;
        int mainStrLength=haystack.length();
        int subStrLength=needle.length();
        if(subStrLength>mainStrLength)return -1;
        int i=0,j=0;
        while(i<mainStrLength&&j<subStrLength){
            if(haystack[i]==needle[j]){
                i++;j++;
            }
            else{
                //不匹配进行回退
                i=i-j+1;
                j=0;
            }
        }
        return (j==subStrLength)?i-j:-1;
    } */
    //调用系统的库
   /*  int strStr(string haystack, string needle) {
        return haystack.find(needle);
    } */
    //使用kmp算法
    int strStr(string haystack, string needle) {
        
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    string str1="hello";
    string str2="ll";
    int a=s.strStr(str1,str2);
    cout<<a<<endl;
    return 0;
}