class Solution {

public:

   int trap(vector<int>& height) {

       int len = height.size();

       int i;

       int left[len], right[len], cap = 0 ;



       left[0] = height[0];

       for(i=1; i<len; i++)

       {

           left[i] = max(left[i-1], height[i]);

       }



       right[len-1] = height[len-1];

       for(i=len-2; i>=0; i--)

       {

           right[i] = max(right[i+1], height[i]);

       }



       for(i=0; i<len; i++)

       {

           cap = cap + min(left[i], right[i])-height[i];

       }

       return cap;

   }

};

