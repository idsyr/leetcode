class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int iter = digits.size()-1;
        int normal_size = digits.size();
        for(int i = 0; i<normal_size;i++)
        {
            if(digits[iter] < 9)
            {
                digits[iter] += 1;
                break;
            }
            else
            {
                if(iter == 0)
                {
                    digits.insert(digits.begin(), 1);
                    iter++;
                    digits[iter] = 0;
                    break;
                }
                digits[iter] = 0;
                iter--;
                
            }
        }
        return digits;
    }
};
