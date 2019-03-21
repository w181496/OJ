/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval>ans;
        Interval prev;
        if(intervals.empty()) {
            ans.push_back(newInterval);
            return ans;
        }
        bool flag = false;
        for(int i = 0; i < intervals.size(); ++i) {
            if(flag) {
                if(intervals[i].start <= ans[ans.size() - 1].end) {
                    ans[ans.size() - 1].end = max(ans[ans.size() - 1].end, intervals[i].end);
                } else {
                    for(int j = i; j < intervals.size(); ++j)
                        ans.push_back(intervals[j]);
                    break;   
                }
            } else if(newInterval.start < intervals[i].start) {
                ans.push_back(newInterval);
                flag = true;
                i--;
            } else if(newInterval.start >= intervals[i].start && newInterval.start <= intervals[i].end) {
                flag = true;
                if(newInterval.end > intervals[i].end) {
                    intervals[i].end = newInterval.end;
                    ans.push_back(intervals[i]);
                } else {
                    for(int j = i; j < intervals.size(); ++j)
                        ans.push_back(intervals[j]);
                    break;   
                }
            } else {
                ans.push_back(intervals[i]);   
            }
        }
        if(!flag)
            ans.push_back(newInterval);
        return ans;
    }
};
