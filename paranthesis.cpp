class Solution {

public:

   bool isValid(string s) {

       int len = s.size();

       int cnt1 = 0, cnt2 = 0, cnt3 = 0;

       int i = 0;

       while(i!= len)

       {

           if(s[i] == '(') cnt1++;

           if(s[i] == ')') cnt1--;

           if(s[i] == '{') cnt2++;

           if(s[i] == '}') cnt2--;

           if(s[i] == '[') cnt3++;

           if(s[i] == ']') cnt3--;



           i++;

       }

       if(cnt1==0 && cnt2==0 && cnt3==0)

           return true;

       else return false;

   }

};
