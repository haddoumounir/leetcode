class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
		ListNode *head = NULL;
		ListNode *tail = NULL;
        if (!list1)
			return list2;
		if (!list2)
			return list1;


		while (list1 && list2)
		{
			ListNode *node;
			if (list1->val <= list2->val)
			{
				node = list1;
				list1 = list1->next;
			}
			else
			{
				node = list2;
				list2 = list2->next;
			}

			if (!head)
			{
				head = node;
				tail = node;
			}
			else
			{
				tail->next = node;
				tail = node;
            }
		}
		if (list1)
			tail->next = list1;
		else if (list2)
			tail->next = list2;
		return (head);
    }
};