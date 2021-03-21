// https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/590/week-3-march-15th-march-21st/3678/
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const double PI = 3.14159265358979732384626433832795;
const int64_t mod = 1000000007;

class UndergroundSystem {
public:
    
    unordered_map< int, pair<int, string>> by_id;
    unordered_map< string, pair<int, int>> by_station;
    
    void checkIn(int id, string stationName, int t) {
        by_id[id]={t,stationName};

    }
    
    void checkOut(int id, string stationName, int t) {
        int startTime = by_id[id].first;
        string newstr = by_id[id].second + "_to_ " + stationName;
        int curtime = by_station[newstr].first;
        int count = by_station[newstr].second;
        by_station[newstr] = {curtime + t - startTime, count + 1};
        by_id.erase(id); 
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string newstr = startStation + "_to_ " + endStation;
        return (double)by_station[newstr].first/(double)by_station[newstr].second ;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */