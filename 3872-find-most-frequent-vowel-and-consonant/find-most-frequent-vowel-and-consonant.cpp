class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> freq;
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]+=1;
        }
        int maxVowel = 0;
        int maxConsonant = 0;
        for(auto a:freq){
            if(a.first=='a'||a.first=='e'||a.first=='i'||a.first=='o'||a.first=='u')
            {
                maxVowel=max(maxVowel,a.second);
            }
            else
            {
               maxConsonant=max(maxConsonant,a.second);
            }
        } 
        return maxVowel+maxConsonant;
    }
};