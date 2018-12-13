#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    /* string longestCommonPrefix(vector<string>& strs) {
        string tempStr=strs[0];
        vector<char>charArray;
        charArray.assign(tempStr.begin(),tempStr.end());
        string result="";
        int size=strs.size();
        int minCommon=0;
        for(int i=1;i<size;i++){
            string newStr=strs[i];
            vector<char>tempArray;
            tempArray.assign(newStr.begin(),newStr.end());
            int tempArraySize=tempArray.size();
            int j=0;
            for(;j<tempArraySize;j++){
                if(charArray[j]!=tempArray[j])break;
            }
            if(i==1){
                minCommon=j-1;
            }else
            {
                minCommon=(minCommon<j-1)?minCommon:j-1;
            }
        }
        for(int i=0;i<minCommon;i++){
            result+=charArray[i];
        }
        return result;

    } */
    //对string不熟悉，上面使用的char字符数组，其实完全没有必要
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int size=strs.size();
        if(size==0)return result;
        string firstStr=strs[0];
        int min=firstStr.length();
        for(int i=1;i<size;i++){
            int j=0;
            string tempStr=strs[i];
            int tempStrSize=tempStr.length();
            for(;j<tempStrSize&&j<min;j++){
                if(firstStr[j]!=tempStr[j])break;
            }
            min=(j<min)?j:min;
        }
        return firstStr.substr(0,min);
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}