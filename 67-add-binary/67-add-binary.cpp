class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.length(), n2=b.length();
        int i=n1-1, j=n2-1, c=0;
        string ans="";
        while(i>=0 && j>=0)
        {
            int p=a[i]-'0';
            int q=b[j]-'0';
            int t=p+q+c;
            c=0;
            if(t<=1)
            {
                char ch=t+'0';
                ans=ch+ans;
            }
            else
            {
                if(t==3)
                {
                    ans='1'+ans;
                }
                else if(t==2)
                {
                    ans='0'+ans;
                }
                c=1;
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            int p=a[i]-'0';
            int t=p+c;
            c=0;
            if(t<=1)
            {
                char ch=t+'0';
                ans=ch+ans;
            }
            else
            {
                if(t==3)
                {
                    ans='1'+ans;
                }
                else if(t==2)
                {
                    ans='0'+ans;
                }
                c=1;
            }
            i--;
        }
        while(j>=0)
        {
            int q=b[j]-'0';
            int t=q+c;
            c=0;
            if(t<=1)
            {
                char ch=t+'0';
                ans=ch+ans;
            }
            else
            {
                if(t==3)
                {
                    ans='1'+ans;
                }
                else if(t==2)
                {
                    ans='0'+ans;
                }
                c=1;
            }
            j--;
        }
        if(c>0)
        {
            ans='1'+ans;
        }
        return ans;
    }
};