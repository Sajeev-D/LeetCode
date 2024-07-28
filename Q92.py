## Attemp 1: Does not pass all test cases
# # Definition for singly-linked list.

# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# class Solution(object):
#     def reverseBetween(self, head, left, right):
#         if head is None or head.next is None:
#             return head

#         # Initialize pointers
#         currNode = head
#         prevNodeLeft = None
#         prevNodeRight = None
#         nextNodeLeft = None
#         nextNodeRight = None

#         # Find the relevant nodes
#         while currNode is not None:
#             if currNode.next is not None and currNode.next.val == left:
#                 prevNodeLeft = currNode

#             if currNode.val == left:
#                 nextNodeLeft = currNode.next

#             if currNode.next is not None and currNode.next.val == right:
#                 prevNodeRight = currNode

#             if currNode.val == right:
#                 nextNodeRight = currNode.next

#             currNode = currNode.next

#         # Rewire the nodes
#         if prevNodeLeft is not None and prevNodeRight is not None and nextNodeLeft is not None and nextNodeRight is not None:
#             rightNext = nextNodeRight  # step 1
#             prevNodeRight.next.next = nextNodeLeft  # step 2
#             prevNodeLeft.next.next = rightNext  # step 3
#             nextCurrLeft = prevNodeLeft.next  # step 4
#             prevNodeLeft.next = prevNodeRight.next  # step 5
#             prevNodeRight.next = nextCurrLeft  # step 6
#             return head
        
#         elif prevNodeLeft is None and prevNodeRight is None and nextNodeLeft is None and nextNodeRight is None:
#             return head
        
#         elif prevNodeLeft is None and prevNodeRight is not None and nextNodeLeft is not None and nextNodeRight is None:
#             newHead = prevNodeRight.next # step 1
#             head.next = None # step 2
#             prevNodeRight.next.next = head # step 3
#             head = newHead # step 4
#             return head

#         """
#         :type head: ListNode
#         :type left: int
#         :type right: int
#         :rtype: ListNode
#         """

# Attempt 2

# # Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# class Solution(object):
#     def reverseBetween(self, head, left, right):
#         dummy = ListNode(0, head)

#         # Phase 1: Reach node at left position
#         leftPrev = dummy
#         curr = head
#         for i in range(left -1):
#             leftPrev = curr
#             curr = curr.next

#         # Phase 2: reverse node from left to right
#         prev = None
#         for i in range(right-left+1):
#             tempNext = curr.next
#             curr.next = prev
#             prev = curr
#             curr = tempNext

#         # Phase 3: Update the pointer
#         leftPrev.next.next = curr
#         leftPrev.next = prev
#         return dummy.next
        
#         """
#         :type head: ListNode
#         :type left: int
#         :type right: int
#         :rtype: ListNode
#         """
        


# if __name__ == "__main__":
#     test = list()
#     test.append(1)
    
#     if 1 in test:
#         print("1 is in test")
        