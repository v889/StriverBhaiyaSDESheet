#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    vector<int> temp=intervals[0];
    for(auto i:intervals){
        if(i[0]<=temp[1]){
            temp[1]=max(i[1],temp[1]);
        }
        else{
            ans.push_back(temp);
            temp=i;
        }
    }
        ans.push_back(temp);
        return ans;
        
 }
    


