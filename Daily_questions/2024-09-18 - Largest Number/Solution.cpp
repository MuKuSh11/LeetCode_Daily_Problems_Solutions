class Solution {
public:
    bool static customComparator(int a, int b) {
        // to_string(int) -> convert integer to string
        // stoull(string) -> converts string to unsigned long long
        if( stoull(to_string(a) + to_string(b)) > stoull(to_string(b) + to_string(a)) ) {
            return true;
        }
        return false;
    }
    string largestNumber(vector<int>& nums) {
        bool allZeroes = true;

        sort(nums.begin(), nums.end(), customComparator);

        string output = "";

        for(int num : nums) {
            if ( num != 0 ) {
                allZeroes = false;
            }
            output += to_string(num);
        }

        // handle edge case -> if all elements are 0, then output should be "0"
        if( allZeroes ) {
            output = "0";
        }

        return output;
    }
};