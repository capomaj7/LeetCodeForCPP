#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
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

    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}