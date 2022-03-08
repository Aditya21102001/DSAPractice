class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length();
        int n2=num2.length();
        string ans="";
        int ca=0;
        if(n1>=n2)
        {
            int i, j=n1-1;
            for(i=n2-1; i>=0; i--)
            {
                int a=num1[j]-'0';
                int b=num2[i]-'0';
                int c=a+b+ca;
                ca=0;
                if(c<=9)
                {
                    char ch=(c+'0');
                    ans=ch+ans;
                }
                else
                {
                    ca=c/10;
                    char ch=((c%10)+'0');
                    ans=ch+ans;
                }
                j--;
            }
            while(j>=0)
            {
                int a=num1[j]-'0';
                int c=a+ca;
                ca=0;
                if(c<=9)
                {
                    char ch=(c+'0');
                    ans=ch+ans;
                }
                else
                {
                    ca=c/10;
                    char ch=((c%10)+'0');
                    ans=ch+ans;
                }
                j--;
            }
            if(ca>0)
            {
                char ch=(ca+'0');
                ans=ch+ans;
            }
            ca=0;
        }
        else
        {
            int i, j=n2-1;
            for(i=n1-1; i>=0; i--)
            {
                int a=num1[i]-'0';
                int b=num2[j]-'0';
                int c=a+b+ca;
                ca=0;
                if(c<=9)
                {
                    char ch=(c+'0');
                    ans=ch+ans;
                }
                else
                {
                    ca=c/10;
                    char ch=((c%10)+'0');
                    ans=ch+ans;
                }
                j--;
            }
            while(j>=0)
            {
                int a=num2[j]-'0';
                int c=a+ca;
                ca=0;
                if(c<=9)
                {
                    char ch=( c +'0');
                    ans=ch+ans;
                }
                else
                {
                    ca=c/10;
                    char ch=((c%10)+'0');
                    ans=ch+ans;
                }
                j--;
            }
            if(ca>0)
            {
                char ch=(ca+'0');
                ans=ch+ans;
            }
            ca=0;
        }
        return ans;
    }
};