class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> uset;
        for( char c : allowed ) {
            uset.insert(c);
        }
        int count = 0;
        bool flag = true;
        for( string word : words ) {
            flag = true;
            for( char c : word ) {
                if( uset.find(c) == uset.end() ) {
                    flag = false;
                    break;
                }
            }
            if( flag ) {
                count++;
            }
        }
        return count;
    }
};