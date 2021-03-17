// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3675/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

class Solution {
public:
    double radius;
    double x_center;
    double y_center;
    const double PI = 3.14159265358979732384626433832795;
    
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
    }
    
    vector<double> randPoint() {
        double random = (double)rand()/RAND_MAX;
        double theta = 2*PI*random;
        double r = sqrt((double)rand()/RAND_MAX);
        double x = x_center + radius*r*cos(theta);
        double y = y_center + radius*r*sin(theta);
        return(vector<double> {x,y});
        
    }
};

