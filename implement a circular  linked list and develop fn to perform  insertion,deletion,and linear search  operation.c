//C program to Implement a Circular Linked List and develop functions to perform insertion, deletion and linear search operations.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

// function prototyping
struct node *create(int);
void insert_at_begin(int);
void insert_at_end(int);
void insert_at_position(int, int);
void delete_at_begin();
void delete_at_end();
void delete_at_position(int);
void search(int);
void update(int, int);
void print_list();
void print_list_reverse();
int size_of_list();
int getData();
int getPosition();

int main()
{
    char user_active = 'Y';
    int user_choice;
    int data, position;

    while(user_active == 'Y' || user_active ==…
