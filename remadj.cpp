class Solution {

public:

   string removeDuplicates(string s) {



       stack<char> st;

       int i=0;

       while(i<s.length())

       {

           if(st.empty() || s[i] != st.top())

           {

              st. push(s[i]);

               i++;

           }

           else

           {

               st.pop();

               i++;

           }

       }





       string ans = "";

       while(!st.empty())

       {

           ans = st.top()+ans;

           st.pop();

       }

      return (ans);







   }

};
