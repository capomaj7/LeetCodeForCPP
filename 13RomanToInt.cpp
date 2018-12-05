#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
     int  romanToInt(string s) {
        //char *chararray;
        vector<char>chararray;
        //开始的时候assign函数不会使用
        chararray.assign(s.begin(),s.end());
        map<char,int>romanmap;
        romanmap['I']=1;
        romanmap['V']=5;
        romanmap['X']=10;
        romanmap['L']=50;
        romanmap['C']=100;
        romanmap['D']=500;
        romanmap['M']=1000;
        int sum=0;
        int length=chararray.size();
        for(int i=0;i<length;i++){
            if(i!=length-1&&romanmap[chararray[i]]<romanmap[chararray[i+1]]){
                 sum+=romanmap[chararray[i]]*-1;
            }else{
            sum+=romanmap[chararray[i]];
            }
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    int chararray;
    string ss="LVIII";
    chararray= s.romanToInt(ss);
    cout<<chararray<<endl;
    return 0;
}