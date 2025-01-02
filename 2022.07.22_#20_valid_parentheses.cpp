class Solution {
public:
    char myReverse(char brack)
    {
        /*map<char, char> brack_type =
        {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        return brack_type[brack];*/
        if(brack == ')')
            return '(';
        if(brack == '}')
            return '{';
        if(brack == ']')
            return '[';
        return '?';
    }
    bool isValid(string s) {
        stack<char> act_el;
        act_el.push('#');
        for(int i = 0; i<(int)s.size(); i++)
        {
            if(myReverse(s[i]) == act_el.top())
            {
                act_el.pop();
            }
            else
            {
                act_el.push(s[i]);
            }
        }
        if(act_el.top() == '#')
            return true;
        else
            return false;
    }
};
