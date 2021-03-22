// https://leetcode.com/problems/median-of-two-sorted-arrays/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class Solution {
public:
    //sort = [&](vector)
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1; int size2;
        
        if(nums1.empty())size1=0;
        else size1 = nums1.size();
        if(nums2.empty())size2=0;
        else size2 = nums2.size();
        
        int size = size1+size2;
        int center;
        if(size%2==0)center = size/2+1;
        else center = (size+1)/2;
        
        int first = 0;
        int second = 0;
         
        int index1 = 0;
        int index2 = 0;
        
        
        for(int i = 0;i<center;i++){
            second = first;
            if(nums2.empty()){
                first = nums1[index1];
                index1 +=1;
            }else if(nums1.empty()){
                first = nums2[index2];
                index2 +=1;
            }else if(index2>nums2.size()-1){
                first = nums1[index1];
                index1 +=1;
            }else if(index1>nums1.size()-1){
                first = nums2[index2];
                index2 +=1;
            }else if(nums1[index1]<nums2[index2]){
                first = nums1[index1];
                index1 +=1;
            }else{
                first = nums2[index2];
                index2 +=1;
            }
        }
        double ans;
        if(size%2==0)ans = (double)(first+second)/2;
        else ans = first;
        
        return(ans);
    }
        
    
    
};