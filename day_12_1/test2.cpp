#include <iostream>
#include <stack>
#include <string>
using namespace std;


class Parenthesis {
  public:
    bool chkParenthesis(string A, int n) {
      stack<char> St;
      for(int i = 0;i < n; ++i)
      {
        if(A[i] == '(')
        {
          St.push(A[i]);
        }
        else{
          if(St.size() == 0)
          {
            return false;

          }
          else{
            St.pop();
          }
        }
      }
      return St.size() == 0;

    }
};
