class Solution {

public:

   bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {



       stack<int> st;

       int i, j=0;

       int len = pushed.size();

       for(i=0; i<len; i++)

       {

           st.push(pushed[i]);



           while(!st.empty() && j<len && st.top()==popped[j])

           {

               st.pop();

               j++;

           }

       }

       return j == len;

   }

};
