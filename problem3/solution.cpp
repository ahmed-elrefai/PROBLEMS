#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int value) : val(value), next(nullptr) {};
    ListNode(int value, ListNode* nextNode) : val(value), next(nextNode) {};
};

class Solution{
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
            ListNode* dummy = new ListNode;
            ListNode* tail = dummy;

            while (list1 != nullptr && list2 != nullptr){
                if (list1->val < list2->val){
                    tail->next = list1;
                    list1 = list1->next;
                }else{
                    tail->next = list2;
                    list2 = list2->next;
                }
                tail = tail->next;
            }

            if (list1 != nullptr){
                tail->next = list1;
            }else{
                tail->next = list2;
            }
            ListNode* result = dummy->next;
            delete dummy;
            return result;
        }

};

int main(){
    ListNode* list1 = new ListNode(3, new ListNode(7, new ListNode(9)));
    ListNode* list2 = new ListNode(5, new ListNode(8, new ListNode(11)));
    Solution sol;

    ListNode* result = sol.mergeTwoLists(list1, list2);
    while (result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}