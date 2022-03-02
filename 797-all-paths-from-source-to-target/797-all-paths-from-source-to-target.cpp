class Solution {
public:
    void allPath(vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int> out, int ind )
    {
        out.push_back(ind);
        if(ind==graph.size()-1)
        {
            ans.push_back(out);
            return;
        }
        for(int i=0; i<graph[ind].size(); i++)
        {
            allPath(graph, ans, out, graph[ind][i]);    
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> out;
        allPath(graph, ans, out, 0);
        return ans;
    }
};