class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> s;
        for(int i=0; i<token.size(); i++)
        {
            if(token[i]!="+" && token[i]!="-" && token[i]!="/" && token[i]!="*")
            {
                int t=stoi(token[i]);
                s.push(t);
            }
            else
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                int r;
                if(token[i]=="+")
                {
                    r=b+a;
                }
                else if(token[i]=="-")
                {
                    r=b-a;
                }
                else if(token[i]=="/")
                {
                    r=b/a;
                }
                else
                {
                    r=b*a;
                }
                s.push(r);
            }
        }
        return s.top();
    }
};