class coordinate {
  public:
    int x;
    int y;
    int len;
    coordinate(int x,int y,int len){
        this->x = x;
        this->y = y;
        this->len = len;
    }
};
class Solution {
public:
    int ans = INT_MAX;
    int dx[8] = {0,0,-1,1,-1,1,1,-1};
    int dy[8] = {-1,1,0,0,-1,-1,1,1};
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1) return -1;
        
        //bfs
        queue<coordinate> q;
        q.push(coordinate(0,0,1));
        while(!q.empty()){
            coordinate c = q.front();
            q.pop();
            if(c.x==grid.size()-1 and c.y==grid[0].size()-1)
                ans = min(ans,c.len);

            for(int i=0;i<8;i++){
                int x = c.x + dx[i];
                int y = c.y + dy[i];
                if(x<grid.size() and x>=0 and y<grid[0].size() and y>=0 and grid[x][y]!=1){
                    grid[x][y] = 1;
                    int len = c.len+1;
                    q.push(coordinate(x,y,len));
                }
            }
        }
        
        return ans==INT_MAX?-1:ans;
    }
};