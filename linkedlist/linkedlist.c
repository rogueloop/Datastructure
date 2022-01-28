#include<stdio.h>

void main()
{
struct node
{
    int info;       //4bites
    struct node * ptr       // 4 bytes
}

struct node N1;
N1.info=5;
N1.ptr =& N1;

struct node * p1;

//headder pointer
struct node * start;
// if(start==NULL)
//     printf("empty linked list");
//initilise linked list
start =NULL;


//1.insertion to linked list
// a-  insert into first node
// b-  insert after last node
// c-  insert after specific node


// a
// 1) create node

sruct node * newnode;
malloc(10)//used to alocate a specific amount of bites in memmry
          //it returns the address (pointer) to the allocated memmmory
sizeof(); //
Newnode = (struct node *)Malloc(Sizeof(struct node));
int * p;  

// 2) fill info feild ....10
newnode -> info=10;

// 3) set the links

newnode -> ptr =start;
start = newnode;

}