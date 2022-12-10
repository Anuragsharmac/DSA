#include<iostream>

using namespace std;
struct data{
    int data;
    struct node * next;
}*head,*newNode,*temp;
void Create(int n);
void traverse();
int main()
{
    int n;
  cin>>n;
   Create(n);
   traverse();
}
void Create(int n)
{
    head = (struct node*)malloc(sizeof( struct node));
    if(head == NULL)
    {
        cout<<"not allocation";
        exit(0);
    }
    scanf("%d",&data);
    
    head -> data = data;
    head -> next =NULL;
    temp = head;
    for(int i=2;i<=n;i++)
    {
        new = (struct node*)malloc(sizeof(struct node));
        if(new == NULL)
        {
            cout<<("no allocaton");
            exit(0);
            
        }
        scanf("%d",&data);
        new -> dataa = data;
        new -> next = NULL;
        temp -> next = new;
        temp = temp->next;
    }

}
void traverse()
{
    temp=head;
    while(temp != NULL)
    {
      cout<<("%d",temp -> data);
        temp=temp -> newNode;
    }
}
int serach(int key)
{
    int i = 0;
    temp = head;
    while(temp != NULL)
    {
        if(temp -> data === key)
        {
            return i;
        }
        temp = temp ->next;
        i++;
    }
    return -1;
}