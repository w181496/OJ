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
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval>ans;
        sort(intervals.begin(), intervals.end(), cmp);
        for(int i = 0; i < intervals.size(); ++i) {
            if(!ans.empty()) {
                Interval tmp = ans[ans.size() - 1];
                if(intervals[i].start >= tmp.start && intervals[i].start <= tmp.end)
                    ans[ans.size() - 1].end = max(ans[ans.size() - 1].end, intervals[i].end);
                else if(intervals[i].start > tmp.end)
                    ans.push_back(intervals[i]);
            } else {
                ans.push_back(intervals[i]);    
            }
        }
        return ans;
    }
    
    bool static cmp(Interval a, Interval b) {
        if(a.start != b.start)
            return a.start < b.start;
        return a.end < b.end;
    }
};
