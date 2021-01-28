#include <stdlib.h>
#include <stdio.h>
#include "pri_queue.h"
/** @file pri_queue.c */
static Node_ptr_t head = NULL;
/**
 * Insert a Node into a priority queue.
 * @param priority
 * @param data
 * @author Rohan Chopra
 */
void PQ_insert(int priority, char * data) {
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    t->priority = priority;
    t->data = data;
    t->next = NULL;
    if(head == NULL){
        head = t;
    }else{
        struct node *p = head;
        struct node *q = NULL;
        if(priority < head->priority){
          while(priority < p->priority){
            q = p;
            p = p->next;
          }
          q->next = t;
          t->next = p;  
        }else{
            t->next = head;
            head = t;
        }
    }
}
/**
 * Delete and return the node with the highest priority.
 * @return The highest priority Node.
 */
Node_ptr_t PQ_delete() {
    struct node *p;
    if(head == NULL){
        printf("Queue is empty");
    }else{
        p = head;
        head = head->next;
        //free(p);
    }
    return p;
}

/**
 * Do NOT modify this function.
 * @return A pointer to the head of the list.  (NULL if list is empty.)
 */
Node_ptr_t PQ_get_head() {
    return head;
}

/**
 * Do NOT modify this function.
 * @return the number of items in the queue
 */
int PQ_get_size() {
    int size = 0;
    Node_ptr_t tmp;
    for(tmp = head; tmp != NULL; tmp = tmp->next, size++)
        ;
    return size;
}


