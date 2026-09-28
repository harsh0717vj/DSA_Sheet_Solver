class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool seen[26]={false};
        for(int i=0;i<sentence.size();i++){
            seen[sentence[i]-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(!seen[i]) return false;
        }
        return true;
    }
};
