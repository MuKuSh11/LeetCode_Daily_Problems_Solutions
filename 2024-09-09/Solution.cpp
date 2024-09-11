/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> output(m, vector<int>(n, -1));

        ListNode* curr = head;
        string direction = "RIGHT";
        if (n == 1) {
            direction = "DOWN";
        }
        int b = 0;

        int c = 0;
        int i = 0;
        int j = 0;
        while (c < m * n) {
            if (curr == NULL) {
                break;
            }
            if (direction == "RIGHT") {
                output[b][j] = curr->val;
                j++;
                if (j == n - b - 1) {
                    direction = "DOWN";
                }
            } else if (direction == "DOWN") {
                output[i][n - b - 1] = curr->val;
                i++;
                if (i == m - b - 1) {
                    direction = "LEFT";
                }
            } else if (direction == "LEFT") {
                output[m - b - 1][j] = curr->val;
                j--;
                if (j == b) {
                    direction = "UP";
                }
            } else if (direction == "UP") {
                output[i][b] = curr->val;
                i--;
                if (i == b + 1) {
                    direction = "RIGHT";
                    b++;
                }
            }
            c++;
            curr = curr->next;
        }

        return output;
    }
};