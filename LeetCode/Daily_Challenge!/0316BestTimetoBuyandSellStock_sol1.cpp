// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3674/
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int> a(n,0); //buy
        vector<int> b(n,0); //sell
        for(int i=0;i<n;i++){
            if(i==0){
                a[i]=0;
                b[i]=-prices[i];
                continue;
            }
            a[i]=max(a[i-1],b[i-1]+prices[i]-fee);
            b[i]=max(b[i-1],a[i-1]-prices[i]);
        }
        cout<<endl;
        return max(a[n-1],b[n-1]);
        
    }
};