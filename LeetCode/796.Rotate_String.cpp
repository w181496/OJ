class Solution {
public:
    bool rotateString(string A, string B) {
        if(A == B) return true;
        for(int i = 0; i < A.size(); ++i) {
            string tmp = "";
            for(int j = i; j < A.size(); ++j)
                tmp += A[j];
            for(int j = 0; j < i; ++j)
                tmp += A[j];
            if(tmp == B) return true;
        }
        return false;
    }
};
