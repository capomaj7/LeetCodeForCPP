#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int flag =(x>=0)?1:0;
        if(flag==0) x=-1*x;
        int firstZero=0;
        vector<int>a;
        while(x){
            a.push_back(x%10);
            x /=10;
        }
        int result=0;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==0&&firstZero==0){
                continue;
            }
            result+=pow(10,firstZero)*a[i];
            firstZero++;
        }
        //这里没有想官方那样，直接考虑溢出返回相应的补码，
        //之前转换的时候都已经转换为正的了，所以就补码只可能为负的
        if(result<0)return 0;
        // if(result>pow(2,31)-1&&flag==1)return 0;
        // if(result>pow(2,31)&&flag==0)return 0;
        return flag>0?result:-1*result;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    int result=s.reverse(-321);
    cout<<result<<endl;
    return 0;
}