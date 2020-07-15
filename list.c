#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value;
    struct Node *next;
} Node;
void push(Node **head, int data) {
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->value = data;
    tmp->next = (*head);
    (*head) = tmp;
}
void print_( const Node *head){
    while (head){
        printf("%d ",head->value);
        head = head->next;
    }
}
void sort(Node *head){
    Node (*tmp)=head;
    while (tmp){
        Node (*cmp)=tmp->next;
        while(cmp){
            if ((cmp->value)<(tmp->value)) {int s=(cmp->value);(cmp->value)=tmp->value; (tmp->value=s); } cmp=cmp->next;
        }tmp=tmp->next;
    }
}
int main(){
    Node *head = NULL;
    int a;
    while((scanf("%d",&a))!=EOF){
       push(&head,(a));
    }
    sort(head);
    printf("\n");
    print_(head);
    return 0;
}

