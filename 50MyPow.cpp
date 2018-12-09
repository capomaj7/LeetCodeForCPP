#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        // double total=1.0;
        // if(n>0){
        //     while(n){
        //         total *=x;
        //         n--;
        //     }
        // }
        // if(n<0){
        //     n=n*-1;
        //     while(n){
        //         total*=1.0/x;
        //         n--;
        //     }
        // }
        // return total;
        return pow(x,n);
    }     
};
int main(int argc, char const *argv[])
{
    Solution s;
    //double test=s.myPow(2.000000,10);
    //double test=s.myPow(2.10000,3);
    double test=s.myPow(2.00000,-4);
    cout<<test<<endl;
    
    return 0;
}

//思路：两种解法第一种和两数相除有点类似，例如2^5,5的二进制为101，因此每次将5进行左移，遇到1的就将其乘上，但是有点需要注意的就是，每次移位不管其位是不是1都需要将2进行相乘，比如最开始是2，那么移一位，变成4，在移一位，则变成了16，依次进行计算
class Solution {
public:
    double myPow(double x, int n) {
        double ans = x, res = 1.0;
        long long m = n;
        m = abs(m);
        while(m > 0)
        {
            if(m & 1) res *= ans;
            m >>= 1;
            ans *= ans;
        }
        if(n > 0) return res;
        return 1.0 / res;
    }
};