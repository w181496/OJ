// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
    public:
        int firstBadVersion(int n) {
            int l = 1, r = n, mid;
            while(l < r) {
                mid = l + (r - l) / 2;
                if(isBadVersion(mid)) r = mid;
                else l = mid + 1;
            }
            return l;
        }
};
