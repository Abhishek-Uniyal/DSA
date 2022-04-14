struct ListNode* addTwoNumbers(struct ListNode* p1, struct ListNode* p2)
{
int sum=0;
struct ListNode *home,*p,*t;
home=(struct ListNode*)malloc(sizeof(struct ListNode));
p=home;
while(p1!=NULL || p2!=NULL)
{   
    if(p1!=NULL && p2!=NULL)
    {   sum=p1->val+p2->val+sum/10;
        p->val=sum%10;
        p->next=NULL;
        
        if(p1->next!=NULL || p2->next!=NULL)
        {   t=p;
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->next=p; 
        }
        p1=p1->next;
        p2=p2->next;
    }
    else if(p1==NULL && p2!=NULL)
    {
        sum=p2->val+sum/10;
       
        
                p->val=sum%10;

        p->next=NULL;
        
         if(p2->next!=NULL)
        {   t=p;
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->next=p; 
        }
        p2=p2->next;
    }
    else 
    {
        sum=p1->val+sum/10;
       
        
                p->val=sum%10;

        p->next=NULL;
        
        if(p1->next!=NULL)
        {   t=p;
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            t->next=p; 
        }
        p1=p1->next;
    }

}
    if(sum/10!=0)
    {
     t=p;
     p=(struct ListNode*)malloc(sizeof(struct ListNode));
     t->next=p;
     p->val=sum/10;
     p->next=NULL;
    }
return home;
}