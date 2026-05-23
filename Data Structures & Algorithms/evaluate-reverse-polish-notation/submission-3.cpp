class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for(string str : tokens)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                int numB = stack.top();
                stack.pop();
                int numA = stack.top();
                stack.pop();
                
                int result;
                if(str == "+")
                {
                    result = numA + numB;
                }
                else if(str == "-")
                {
                    result = numA - numB;
                }
                else if(str == "*")
                {
                    result = numA * numB;
                }
                else if(str == "/")
                {
                    result = numA / numB;
                }
                stack.push(result);
            }
            else
            {
                stack.push(stoi(str));
            }
        }

        return stack.top();
    }
};
