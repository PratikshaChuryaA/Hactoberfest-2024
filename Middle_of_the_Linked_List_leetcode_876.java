
class Solution {
    public ListNode middleNode(ListNode head) {
        if(head.next == null){
            return head;
        }
        ListNode temporary = head;
        int count = 0;
        while(temporary.next != null){
            temporary = temporary.next;
            count++;
        }
        count =(count + 1) /2;
        while(count > 0){
            head = head.next;
            count--;
        }
        return head;
    }
}