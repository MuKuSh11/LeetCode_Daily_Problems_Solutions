class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();

        // generating prefix XOR array inplace
        for( int i=1 ; i<n ; i++ ) {
            arr[i] = arr[i] ^ arr[i-1];
        }

        n = queries.size();
        
        vector<int> output(n, 0);

        // iterating over queries and calculating range XOR in O(1) time using prefix XOR array
        for( int i=0 ; i<n ; i++ ) {
            int left = queries[i][0];
            int right = queries[i][1];
            if( left == 0 ) {
                output[i] = arr[right];
            } else {
                output[i] = arr[right] ^ arr[left-1];
            }
        }
        return output;
    }
};