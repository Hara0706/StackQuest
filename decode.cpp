class Solution {

public:

   string decodeString(string s) {

       stack<char> st;

       stack<int> num;



       int i,j,k,cnt=0;

       for(i=0; i<s.length(); i++)

       {

           if(s[i]>='0' && s[i]<='9')

           {

               cnt = cnt*10 + (s[i]-'0');

           }

           else if(s[i]==']')

           {

               int r = num.pop();

               String p = "";

               while(st.peek() != '[')

               {

                   p = st.pop() + p;

               }

               st.pop();



               for(j=0; j<r; j++)

               {

                   for(k=0; k<p.length(); k++)

                   {

                       st.push(p[k]);

                   }

               }

           }

           else

           {

               if(cnt!=0)

               {

                   num.push(cnt);

               }

               cnt=0;

               st.push(s[i]);

           }

       }

       String ans = "";

       while(!st.empty())

       {

           ans = st.pop() + ans;

       }

       return ans;

   }

};
