#include <stdio.h>

typedef struct node
{
    /* data */
    int data;
    struct node* pre;
    struct node* next;
}node, * Double_node_list;


Double_node_list init_list() {
    Double_node_list dlink_list = (Double_node_list)malloc(sizeof(struct node));
    if (NULL == dlink_list) 
        printf("malloc faild\n");
    dlink_list->next = NULL;
    dlink_list->pre = NULL;
    dlink_list->data = 1;
}

void print_list(Double_node_list list) {
    Double_node_list temp = list;
    printf("double list is:\n");
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

Double_node_list create_list(int len) {
    Double_node_list head, p, q;
    p = q = (Double_node_list)malloc(sizeof(struct node));
    if (NULL == p) {
        printf("malloc failed\n");
        return NULL;
    }

    head = p;
    for (int i = 0; i < len; i++) {
        p = (Double_node_list)malloc(sizeof(struct node));
        p->data = i + 1;
        p->next = NULL;
        q->next = p;
        p->pre = q;
        q = p;
    }
    return head;
}

void insert_node(Double_node_list list, int pos, int val) {
    Double_node_list temp = list;
    int i = 0;
    while(NULL != temp && i != pos) {
        temp = temp -> next;
        i++;
    }

    Double_node_list p = (Double_node_list)malloc(sizeof(struct node));
    if (NULL == p) {
        printf("malloc failed\n");
        return;
    }

    p->data = val;
    p->next = temp->next;
    p->pre = temp;
    temp->next->pre = p;
    temp -> next = p;
}

void del_node(Double_node_list list, int pos) {
    Double_node_list temp = list;
    int i = 0;
    while(NULL != temp && i != pos) {
        temp =  temp -> next;
        i++;
    }

    temp->pre->next = temp->next;
    temp->next->pre = temp->pre;
}

int main() {
    int len = 10;
    Double_node_list head = create_list(len);

    insert_node(head, 3, 111);
    print_list(head);

    del_node(head, 4);
    print_list(head);

    return 0;
}

