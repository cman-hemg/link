#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;/* data */
    struct link *p_next;
    
}link;

int main()
{
    link head = {0},tail = {0};
    link node1 = {1},node2 = {5},node3 = {15},node4 = {7};
    head.p_next = &node1;
    node1.p_next = &node2;
    node2.p_next = &node3;
    node3.p_next = &tail;
    /*insert node4 to link*/
    node2.p_next = &node4;
    node4.p_next = &node3;

    return 0;
}
