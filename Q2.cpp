#include <stdlib.h>

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* list1 = l1;
    ListNode* list2 = l2;
    ListNode* toReturn = new ListNode();
    ListNode* currNode = toReturn;
    int carryForward = 0;
    bool firstTime = true;

    while (list1 != nullptr || list2 != nullptr) {
      if (!firstTime) {
        currNode->next = new ListNode();
        currNode = currNode->next;
      }
      firstTime = false;

      int sum = carryForward;
      if (list1 != nullptr) {
        sum += list1->val;
        list1 = list1->next;
      }
      if (list2 != nullptr) {
        sum += list2->val;
        list2 = list2->next;
      }
      carryForward = sum / 10;
      currNode->val = sum % 10;
    }

    // Check for carry forward after the loop
    if (carryForward > 0) {
      currNode->next = new ListNode();
      currNode = currNode->next;
      currNode->val = carryForward;
    }

    return toReturn;
  }
};

int main() {
  //   int i = 8;
  //   cout << "Divide by 10 gives " << i / 10 << endl;
  //   cout << "Modulo by 10 gives " << i % 10 << endl;

  ListNode* list1 = new ListNode();
  list1->val = 2;
  ListNode* currNode = list1;
  currNode->next = new ListNode();
  currNode->val = 3;
  currNode->next = new ListNode();
  currNode->val = 8;

  ListNode* list2 = new ListNode();
  list2->val = 1;
  ListNode* currNode2 = list2;
  currNode2->next = new ListNode();
  currNode2->val = 2;
  currNode2->next = new ListNode();
  currNode2->val = 9;

  Solution s1;
  s1.addTwoNumbers(list1, list2);

  return 0;
}