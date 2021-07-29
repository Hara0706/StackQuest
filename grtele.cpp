class Solution {

public:

   vector<int> nextGreaterElements(vector<int>& nums) {

       int n = nums.size();

       stack<int> st;

       vector<int> a;

       int i;

       for(i=0; i<n; i++)

       {

           a[i] = -1;

       }

       for(i=0; i<2*n; i++)

       {

           int num = nums[i%n];

           while(!st.empty() && nums[st.top()]<num)

           {

               a[st.top()] = num;

               st.pop();



           }

           if(i<n)

               {

                   st.push(i);

               }

       }

       return a;

   }

};
