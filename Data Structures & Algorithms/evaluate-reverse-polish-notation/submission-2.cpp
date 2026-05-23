class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stack;
        int result = 0;

        for(string str : tokens)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                int numB = stoi(stack.top());
                stack.pop();
                int numA = stoi(stack.top());
                stack.pop();

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
                stack.push(to_string(result));
            }
            else
            {
                stack.push(str);
            }
        }

        if(stack.size() == 1 && result == 0)
        {
            result = stoi(stack.top());
            stack.pop();
        }

        return result;
    }
};
