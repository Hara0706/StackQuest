class MinStack {

public:

   /** initialize your data structure here. */

   vector<int> a;

   vector<int> min;

   MinStack() {

       min.push_back(INT_MAX);

   }



   void push(int val) {

      a.push_back(val);

       if(val<min.back())

           min.push_back(val);

       else

           min.push_back(min.back());

   }



   void pop() {

       a.pop_back();

       min.pop_back();

   }



   int top() {

       return a.back();

   }



   int getMin() {

       return min.back();

   }

};

