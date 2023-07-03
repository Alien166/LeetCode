class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int n=s.size();
        int count=0;
        unordered_map<int, int> counter;
        vector<int> vec;
        bool up =false;
        for(int i=0;i<n;++i) {
            if(s[i] != goal[i]) vec.push_back(i);
            ++counter[s[i]];
            if(counter[s[i]] >=2) up=true;

        }
        if(vec.empty() && up) return true;
        if(vec.size() != 2) return false;

        swap(s[vec[0]], s[vec[1]]);

        return s==goal;
