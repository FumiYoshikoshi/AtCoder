// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3778/
#include <iostream>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>   
 
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        map<int,int> map;
        for(vector<int> box :boxTypes){
            auto iter = map.find(box[1]);
            if(iter!=map.end()){
                iter->second += box[0];
            }else{
                map[box[1]]=box[0];
            }
            
        }
        
        int room = truckSize;
        int units = 0;
        
        for (auto iter = map.rbegin(); iter != map.rend(); ++iter) {
            int unit = iter->first;
            int count = iter->second;
            if(room>=count){
                units += unit*count;
                room -= count;
            }else{
                units += unit*room;
                break;
            }
        }

        return units;
        
    }
};