class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string>s;
        for(auto it:dictionary){
            s.insert(it);
        }
        string ans = "" ;
        string temp = "";
        sentence.push_back(' ');
        for(int i=0; i< sentence.length(); i++){
            if(sentence[i]==' '){
                ans += temp;
                ans += " ";
                temp = "";
            }
            else{
                temp += sentence[i];
                if(s.find(temp) != s.end()){
                    ans += temp;
                    ans += " ";
                    temp = "";
                    while(sentence[i] != ' '){
                        i++;
                    }
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};
