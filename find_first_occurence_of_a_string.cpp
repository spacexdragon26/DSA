class Solution {
public:
    int strStr(string haystack, string needle) {
       int index = 0;
        int l1 = haystack.length();
        int l2 = needle.length();
        for(int i = 0; i < l1; i++){
            if(haystack[i] == needle[index]){
                index++;
            }
            else{
                
                i = i - index;
                index = 0;
            }
            if(index == l2){
                return i-l2+1;
            }
        }
        return -1;
    }
    };
