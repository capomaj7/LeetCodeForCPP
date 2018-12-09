#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    //自己的思维能力有点差
    /* int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        if(size==0)return 0;
        int count=0;
        int i=0,j=size-1;
        while(i<=j){
            if(nums[i]!=val&&nums[j]!=val){
                 i++;
                 count++;
             }
            else if(nums[i]!=val&&nums[j]==val){
                j--;
             }
            
            else if(nums[i]==val&&nums[j]!=val){
                nums[i]=nums[j];
                i++;j--;
                count++;
            }
            else{
                j--;
            }
            
        }
        return count;
    } */
    //官方给的解二，当删除元素很少的时候
/*     int removeElement(vector<int>& nums, int val) {
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==val)
            {
                nums[i]=nums[n-1];
                n--;
            }
            else{
                i++;
            }
             
        }
        return n;
    } */
    //使用的是双指针的,一个慢的一个快的
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i
            }
        }
        return i;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}