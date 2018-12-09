#include <iostream>
#include <vector>
using namespace std;
class Solution
{
  public:
  //暴力查找
/*     int searchInsert(vector<int> &nums, int target)
    {
        //flag用于判读数组的是从小到大还是从大到小的排序，默认从小到大的排序
        int flag = 0;
        int size = nums.size();
        if (size == 0)
            return 0;
        if (size == 1)
            return nums[0] >= target ? 0 : 1;
        flag = nums[0] < nums[1] ? 0 : 1;
        int i = 0;
        if (!flag)
        {
            for (; i < size; i++)
            {
                if (nums[i] == target)
                    break;
                if (target < nums[i])
                    break;
            }
        }
        else
        {
            for (; i < size; i++)
            {
                if (nums[i] == target)
                    break;
                if (target > nums[i])
                    break;
            }
        }
        return i;
    } */
    //二分法求解
    int searchInsert(vector<int> &nums, int target)
    {
        int size=nums.size();
        int low=0,high=size-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}