#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *llink;
	char data;
	struct node *rlink;
};

struct node *createNode(char data){
	struct node *p = (struct node *)malloc(sizeof(struct node));

	p->llink = NULL;
	p->data = data;
	p->rlink = NULL;
	return p;
}

//이진트리 소멸
void deleteAll(struct node* p)
{
   if (p != NULL)
   {
    deleteAll(p -> llink);
    deleteAll(p -> rlink);
    free(p);
   }
   
}


//전위운행
void preOrder(struct node* p){
    if(p != NULL){
        printf("%c" , p -> data);   //데이타 출력
        preOrder(p -> llink);    //왼쪽 따라가기
        preOrder(p -> rlink);    //오른쪽 따라가기
    }
}


//중위운행
void inOrder(struct node* p){
    if(p != NULL){
        inOrder(p -> llink);    //왼쪽 따라가기
        printf("%c" , p -> data);   //data 출력
        inOrder(p -> rlink);    //오른쪽 따라가기
    }
}

//후위운행
void postOrder(struct node* p){
    if(p != NULL){
        postOrder(p -> llink);    //왼쪽 따라가기
        postOrder(p -> rlink);    //오른쪽 따라가기
        printf("%c" , p -> data);   //data 출력
    }
}


int main(void){
	struct node *root = createNode('A');
	root->llink = createNode('B');
	root->rlink = createNode('C');
	root->llink->llink = createNode('D');
	root->llink->rlink = createNode('E');
	root->rlink->rlink = createNode('F');
	root->llink->rlink->llink = createNode('G');
	root->rlink->rlink->llink = createNode('H');
	root->rlink->rlink->rlink = createNode('I');
	root->llink->rlink->llink->rlink = createNode('J');

	printf("전위 운행(preOrder)  : ");
	preOrder(root);printf("\n");

	printf("중위 운행(inOrder)   : ");
	inOrder(root);printf("\n");

	printf("후위 운행(postOrder) : ");
	postOrder(root);printf("\n");

	deleteAll(root);

	return 0;
}