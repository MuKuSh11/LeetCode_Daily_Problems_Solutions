class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> output;

        unordered_map<string, int> umap;
        
        string word = "";
        for( int i=0 ; i<s1.size() ; i++ ) {
            if( s1[i] == ' ' ) {
                umap[word] += 1;
                word = "";
            } else { 
                word += s1[i];
            }
        }
        umap[word] += 1;
        
        word = "";
        for( int i=0 ; i<s2.size() ; i++ ) {
            if( s2[i] == ' ' ) {
                umap[word] += 1;
                word = "";
            } else { 
                word += s2[i];
            }
        }
        umap[word] += 1;

        for( auto item = umap.begin() ; item != umap.end() ; item++ ) {
            if(item->second == 1 ) {
                output.push_back(item->first);
            }
        }
        return output;
    }
};