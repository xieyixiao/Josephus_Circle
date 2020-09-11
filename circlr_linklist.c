//
// Created by jackxie on 2020/9/11.
//

#include "stdio.h"
typedef struct cirlink{
    int val;
    struct cirlink *next ;
}Circlelink;
int main(void){
    int l = 0;
    while (scanf("%d",&l)!=EOF) { ;
        Circlelink p[l], *s;
        int i = 0;
        for (i = 0; i < l - 1; i++) {
            p[i].val = i;
            p[i].next = &p[i + 1];
        }
        p[i].next = p;
        p[i].val = i;
        s = p;
        while (s->next != s) {
            s->next->next = s->next->next->next;
            s = s->next->next;
        }
        printf("%d\n", s->val);
    }
    return 0;
}