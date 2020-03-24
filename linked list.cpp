#include <iostream>
                             

using namespace std;

typedef struct Tnode{
	int data;
	Tnode *next;
};

Tnode *head();

void initHead();
int isEmpty();
void insertDepan(int databaru);
void tampilList();
void hapusDepan();
void hapusBelakang();
void clearList();

void inithead()
{
	Tnode*head(head = NULL);
}

int isEmpty()
{
	return (head == NULL) ? 1:0;
	
}

void insertDepan(int databaru)
{
	Tnode *baru;
	baru = new Tnode;
	baru->data = databaru;
	baru->next = NULL;
if(isEmpty()==1)
{
	Tnode*head(head=baru);
	head->next = NULL;
}
else 
{
	Tnode*b->next = head;
	head = baru;
}
cout<<"Data baru telah dimasukkan di depan\n"
}

void insertBelakang (int databaru)
{
	
}
