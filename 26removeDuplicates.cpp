#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    /* int removeDuplicates(vector<int>& nums) {
        int repalceIndex=0;
        if(nums.size()==0)return 0;
        int temp=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=temp){
                temp=nums[i];
                repalceIndex++;
                swap(nums[repalceIndex],nums[i]);
            }
        }
        return repalceIndex+1;
    } */
    //还有调用库的，unique是去除重复的，erase是删除元素的
 /*    int removeDuplicates(vector<int>& nums) {
	nums.erase(unique(nums.begin(),nums.end()),nums.end());
	return nums.size();
    } */
    //官方的解法，使用的是双指针的方法,使用的是一个快指针一个慢指针，
    // 使用的原地算法，但是改变了原来的数组的模样
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }

};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int>nums(10,0);
    nums.resize(9);
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<endl;
    return 0;
}