# https://practice.geeksforgeeks.org/problems/rearrange-a-linked-list/1

Node *even=new Node(0);
       Node *odd=new Node(0);
       Node *taile=even;
       Node *tailo=odd;
       
       Node *curr=head;
       while(curr){
           if((curr->data)%2==0){
               taile->next=curr;
               taile=taile->next;
           }
           else{
               tailo->next=curr;
               tailo=tailo->next;
           }
           curr=curr->next;
       }
       if(even->next==NULL){
       tailo->next=NULL;
       head=odd->next;
       }
       if(odd->next==NULL){
       taile->next=NULL;
       head=even->next;
       }
       tailo->next=even->next;
       taile->next=NULL;
       head=odd->next;
    }
