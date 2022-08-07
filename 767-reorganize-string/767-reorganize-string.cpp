class Solution {
public:
    string reorganizeString(string str) {
        map<char, int> mp;
        int n=str.length();
        for(int i=0; i<n; i++)
        {
            mp[str[i]]++;
        }
        string ans="";
        int mc=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            mc=max(mc, it->second);
        }
        if(mc>(n+1)/2) return "";
        priority_queue<pair<int ,char>> pq;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            pq.push({it->second, it->first});
        }
        while(pq.size()>=2)
        {
            pair<int, char> a=pq.top();
            pq.pop();
            pair<int, char> b=pq.top();
            pq.pop();
            ans+=a.second;
            ans+=b.second;
            a.first--;
            b.first--;
            if(a.first>0)
            {
                pq.push({a.first, a.second});
            }
            if(b.first>0)
            {
                pq.push({b.first, b.second});
            }
        }
        int nn;
        if(pq.size()==0) return ans;
        nn=pq.top().first;
        while(nn>0)
        {
            nn--;
            ans+=pq.top().second;
        }
        //cout<<ans<<endl;
        return ans;
    }
};