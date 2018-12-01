#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,sum=0,k=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int>resultarr(m+n,0);
        for(;i<m&&j<n;){
            if(nums1[i]<nums2[j]){
                resultarr[k++]=nums1[i++];
            }else{
                resultarr[k++]=nums2[j++];
            }
        }
        
        for(;i<m;){
            resultarr[k++]=nums1[i++];
        }
        
        for(;j<n;){
            resultarr[k++]=nums2[j++];
        }
        return (k%2==1)?(1.0*resultarr[k/2]):((resultarr[(k-1)/2]+resultarr[k/2])*1.0)/2;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;

    return 0;
}