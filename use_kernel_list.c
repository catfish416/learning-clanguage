#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define NUM 10

typedef struct person {
    int age;
    struct list_head list;
} *Person_T;

int main() {
    struct person person;
    struct list_head* head = &person.list;
    INIT_LIST_HEAD(head);

    /* create list */
    struct person *p;
    for (int i = 0; i < NUM; i++) {
        p = (Person_T)malloc(sizeof(struct person));
        if (NULL == p) {
            printf("malloc failed\n");
            return -1;
        }
        p->age = i + 30;
        list_add_tail(&p->list, head);
    }

    /* printf list */
    Person_T pos, n;
    struct person new_obj = {.age = 18};
    list_for_each_entry_safe(pos, n, head, list) {
        if (35 == pos->age) {
            list_replace(&pos->list, &new_obj.list);
            //list_del(&pos->list);
            //break;
        }

        if (list_is_last(&pos->list, head))
            printf("the last is age %d\n", pos->age);
    }
    list_for_each_entry(pos, head, list) {
        printf("age = %d\n", pos->age);
    }


    /* delete list */
    return 0;
}