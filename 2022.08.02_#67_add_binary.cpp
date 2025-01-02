// RUNTIME_ERROR
class Solution {
public:
    string addBinary(string a, string b) {
    long long answer = 0;
    int carry = 0;
    int a_size = a.size();
    int b_size = b.size();
    for(int i = 0; i < max(a.size(), b.size()); i++)
    {
        if((a_size - i) > 0)
            carry += a[a_size - i - 1] - '0';
        if((b_size - i) > 0)
            carry += b[b_size - i - 1] - '0';
        if(carry == 3)
        {
            carry = 1;
            answer += pow(10,i);
            continue;
        }
        if(carry == 2)
        {
            carry = 1;
            continue;
        }
        if(carry == 1)
        {
            answer += pow(10,i);
            carry = 0;
            continue;
        }
    }
    if(carry == 1)
    answer += pow(10, max(a_size, b_size));
    return to_string(answer);
}
};
