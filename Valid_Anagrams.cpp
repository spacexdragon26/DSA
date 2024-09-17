class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>freq1;
        unordered_map<char, int>freq2;
        if(t.length() == s.length()){
             for(int i=0; i < t.length(); i++){
                freq1[t[i]]++;
             }
             for(int i=0; i < s.length(); i++){
                freq2[s[i]]++;
             }
             for(int i = 0; i <s.length() && i< t.length(); i++){
                char ch = s[i];
                if(freq1[ch] != freq2[ch]){
                    return false;
                }
             }
             return true;
        }
        else{
            return false;
        }
    }
};
