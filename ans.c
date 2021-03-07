#include <stdio.h>
#include <string.h>

/* 1 */
typedef struct _List {
	struct _List *pPrev;
	struct _List *pNext;
	int data;
} List;

List list;
void add(List *list, List *node) {
    list->pPrev->pNext = node;
    node->pPrev = list->pPrev;
    node->pNext = list->pNext;
    list->pNext->pPrev = node;
    list = node;
    /*
    List* temp = list;

    node->pNext = list;
    list->pPrev = node;
    node->pPrev = temp->pPrev;
    temp->pPrev->pNext = node;

    list = node;
    */
}

void xx_remove(List *node) {
    node->pPrev->pNext = node->pNext;
    node->pNext->pPrev = node->pPrev;
}

char * xx_strstr(const char *cs, const char *ct) {
    if (NULL == cs || NULL == ct || strlen(cs) < strlen(ct))
		return NULL;
	
	int i;
	while(*cs) {
		for(i = 0; *(cs + i) == *(ct + i); i++) {
			if(*(ct + i + 1) == '\0')
				return cs;
		}
		cs++;
	}
	return NULL;
}


#define MAX_BITS    (32)
// (0 <= N < 32)
unsigned int rotate_left(unsigned int X, int N) {
    unsigned int over = X >> (MAX_BITS - N);
    return (X << N | over);
}

int main() {
    printf("%x\n", rotate_left(0x12345678, 4));
}