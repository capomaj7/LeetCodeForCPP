#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    /* vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > sumTwoArray;
        set<vector<int> >sumTwoSet;
        set<vector<int> >::iterator iter;
        if(nums.size()<3)return sumTwoArray;
        int length=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=0,k=0,count=0;
        for(i=0;i<length-2;i++){
            for(j=i+1;j<length-1;j++){
                for(k=j+1;k<length;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> newarray;
                        newarray.push_back(nums[i]);
                        newarray.push_back(nums[j]);
                        newarray.push_back(nums[k]);
                        sumTwoSet.insert(newarray);
                        break;
                    }
                }
            }
        }
        for(iter=sumTwoSet.begin();iter!=sumTwoSet.end();iter++){
            sumTwoArray.push_back(*iter);
        }
        
        return sumTwoArray;
    } */
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        vector<vector<int> > sumTwoArray;
        set<vector<int> >sumTwoSet;
        set<vector<int> >::iterator iter;
        map<map<int,int>,int>mymap;
        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                map<int,int>innerMap;
                innerMap[nums[i]]=nums[j];
                mymap[innerMap]=(nums[i]+nums[j])*-1;
            }
        }
    }
    
};
int main(int argc, char const *argv[])
{
    Solution s;
    int nums2[6]={-1,0,1,2,-1,-4};
    //int nums2[4]={0,0,0,0};
    vector<vector<int> > sumTwoArray;
    vector<int>nums(nums2,nums2+6);
    sumTwoArray=s.threeSum(nums);
    int row=sumTwoArray.size();
    int column=sumTwoArray[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<sumTwoArray[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}