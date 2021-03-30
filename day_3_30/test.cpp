#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> s;
            for(size_t i =0;i < tokens.size();++i)
            {

                if(!(tokens[i] == '+' || tokens[i]  == '-' || tokens[i] == '*' || tokens[i] == '/'))
                {
                    s.push(atoi(tokens[i].c_str()));
                }
                else
                {
                    int num1 = s.top();
                    s.pop();
                    int num2 = s.top();
                    s.pop();
                    switch(tokens[i].c_str())
                    {
                        case '+':
                            s.push(num1 + num2);
                            break;
                        case '-':
                            s.push(num1 - num2);
                            break;
                        case '*':
                            s.push(num1 * num2);
                            break;
                        case '+':
                            s.push(num1 / num2);
                            break;

                    }

                }

            }
            return s.top();

        }

};
