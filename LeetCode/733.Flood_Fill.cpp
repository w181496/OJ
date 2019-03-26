class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int, int>>q;
        q.push(make_pair(sr, sc));
        int first_color = image[sr][sc];
        while(!q.empty()) {
            pair<int,int>now = q.front();
            q.pop();
            int x = now.second, y = now.first;
            if(image[y][x] == newColor) continue;
            if(x > 0 && image[y][x - 1] == first_color) q.push(make_pair(y, x - 1));
            if(x < image[0].size() - 1 && image[y][x + 1] == first_color) q.push(make_pair(y, x + 1));
            if(y > 0 && image[y - 1][x] == first_color) q.push(make_pair(y - 1, x));
            if(y < image.size() - 1 && image[y + 1][x] == first_color) q.push(make_pair(y + 1, x));
            image[y][x] = newColor;
        }
        return image;
    }
};
