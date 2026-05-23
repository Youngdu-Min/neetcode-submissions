class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for(int idx = 0; idx < s.size(); idx++)
        {

            if(s[idx] == '[' || s[idx] == '{' || s[idx] == '(')
            {
                stack.push(s[idx]);
            }
            else
            {
                if(stack.empty())
                    return false;

                char popValue;
                popValue = stack.top();
                stack.pop();
                if((popValue == '[' && s[idx] == ']') || (popValue == '{' && s[idx] == '}') || popValue == '(' && s[idx] == ')')
                {
                    continue;
                }
                return false;
            } 
        }

        return stack.empty();
    }
};
