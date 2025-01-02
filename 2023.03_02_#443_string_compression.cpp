class Solution {
public:
    int compress(vector<char>& chars) {
    int s = chars.size();
    vector<char> answer; char temp = ' '; int count = 1;
    for(int i = 0; i<s; i++){
        if(chars[i]!=temp)
        {
            if(count>1){
                string num = to_string(count);
                for(char ii : num)
                    answer.push_back(ii);
            }
            answer.push_back(chars[i]);
            count = 1;
            temp = chars[i];
        }
        else{count++;}
    }
    if(count>1){
        string num = to_string(count);
        for(char ii : num)
            answer.push_back(ii);
    }
    //swap(chars, answer);
    chars = answer;
    return answer.size();
}
};