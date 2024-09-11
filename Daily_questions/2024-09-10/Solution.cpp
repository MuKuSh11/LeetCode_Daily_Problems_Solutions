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
    int findGCD(int a, int b) {
        int result = min(a, b);

        while (result > 0) {
            if (a % result == 0 && b % result == 0) {
                break;
            }
            result--;
        }
        return result;
    }

    ListNode *insertGreatestCommonDivisors(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *currNode = head;
        ListNode *nextNode = currNode->next;

        while (currNode != NULL && nextNode != NULL) {

            int gcd = findGCD(currNode->val, nextNode->val);

            ListNode *newNode = new ListNode(gcd);
            newNode->next = nextNode;
            currNode->next = newNode;

            currNode = nextNode;
            nextNode = currNode->next;
        }

        return head;
    }
};