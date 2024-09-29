/*#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void print(struct node*pp){
struct node*p=pp;
do{
printf("%d ",p->data);
p=p->next;
}
while(p!=NULL);
}
int main(){
struct node*pp;
struct node*js;
struct node*jj;
pp=(struct node*)malloc(sizeof(struct node));
js=(struct node*)malloc(sizeof(struct node));
jj=(struct node*)malloc(sizeof(struct node));
pp->data=44;
pp->next=js;

js->data=45;
js->next=jj;

jj->data=46;
jj->next=NULL;
print(pp);
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *array;
};
int empty(struct stack s) {
    if(s.top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}
int full(struct stack s) {
    if(s.top==s.size-1) {
   // s.array--;
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    struct stack js;
    js.size=4;
    js.top=-1;
    js.array=(int*)malloc(js.size*sizeof(int));
    for(int i=0; i<=js.size-1; i++) {
        printf("Enter the number");
        scanf("%d",&js.array[i]);
        js.top++;
        }
        for(int i=0;i<=js.size-1;i++){
        printf("The value is: %d\n",js.array[i]);
        }

    if(empty(js)) {
        printf("The stack is empty.");
    }
    else {
        printf("The stack is not empty.");
    }
    }*/
//push the element in last.
/*#include<stdio.h>
#include<stdlib.h>
struct stack {
 int size;
 int top;
 int *array;
};
int empty(struct stack s) {
 if(s.top==-1) {
     return 1;
 }
 else {
     return 0;
 }
}
int full(struct stack s) {
 if(s.top==-1) {
// s.array--;
     return 1;
 }
 else {
     return 0;
 }
}
int main() {
 struct stack js;
 js.size=4;
 js.top=-1;
 js.array=(int*)malloc(js.size*sizeof(int));
/* for(int i=0; i<=js.size; i++) {
     printf("Enter the number");
     scanf("%d",&js.array[i]);
     js.top=js.top+1;
     }
     for(int i=0;i<=js.size;i++){
     printf("The value is: %d\n",js.array[i]);
    js.top++;
     }*/
/* js.array[0]=44;
js.top++;
js.array[1]=33;
js.top++;
js.array[2]=79;
js.top++;
js.array[3]=10;
js.top++;
js.array[4]=12;
js.top++;
if(full(js)) {
 printf("The stack is overflow.");
 for(int i=0;i<=js.size;i++){
 printf("The value is: %d\n",js.array[i]);
js.top++;
}
}
else {
 js.top++;
 js.array[js.top]=56;

for(int i=0;i<=js.size;i++){
 printf("The value is: %d\n",js.array[i]);
js.top++;
}
}
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct stack {
 int size;
 int top;
 int *array;
};
int empty(struct stack s) {
 if(s.top==-1) {
     return 1;
 }
 else {
     return 0;
 }
}
int full(struct stack s) {
 if(s.top==s.size-1) {
// s.array--;
     return 1;
 }
 else {
     return 0;
 }
}
int main() {
 struct stack js;
 js.size=6;
 js.top=-1;
 js.array=(int*)malloc(js.size*sizeof(int));
     js.array[0]=44;
    js.top++;
   js.array[1]=33;
   js.top++;
   js.array[2]=79;
   js.top++;
   js.array[3]=10;
   js.top++;
  js.array[4]=12;
  js.top++;
 if(empty(js)) {
     printf("The stack is overflow.");
     for(int i=0;i<=js.size-1;i++){
     printf("The value is: %d\n",js.array[i]);

    js.top++;
    }
 }

 else {
  //   free(js.array[js.top]);
 // js.array[js.top]=NULL;
  //js.array--;
  int val=js.array[js.top];
  printf("The value on top is: %d\n",val);
 js.top=js.top-1;
 printf("The top now is: %d\n",js.top);
 printf("\n\n");
for(int i=0;i<=js.size-2;i++){
     printf("The value is: %d\n",js.array[i]);
    js.top++;
    }
 }
 }*/
/*#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *array;
};
int empty(struct stack s){
if(s.top==-1){
return 1;
}
else{
return 0;
}
}
int full(struct stack s){
if(s.top==s.size-1){
return 1;
}
else{
return 0;
}
}
int main(){
struct stack s;
s.size=4;
s.top=-1;
s.array=(int *)malloc(s.size*sizeof(int));
s.array[0]=45;
s.top++;
s.array[1]=23;
s.top++;
s.array[2]=80;
s.array[3]=89;
s.top++;
s.array[4]=82;
s.top++;
if(empty(s)){
printf("Stack is underflow");
}
else{
}
if(full(s)){
printf("Stack is overflow");
}
//  else{
}*/
//Code of stack's  operations.
/*#include<stdio.h>
#include<stdlib.h>
   struct stack{
   int size;
   int top;
   int *array;
   };
   int empty(struct stack s){
   if(s.top==-1){
   return 1;
   }
   else{
   return 0;
   }
   }
   int full(struct stack s){
   if(s.top==s.size-1){
   return 1;
   }
   else{
   return 0;
   }
   }
   int main(){
   struct stack s;
   s.size=4;
   s.top=-1;
   s.array=(int *)malloc(s.size*sizeof(int));
   s.array[0]=45;
   s.top++;
   s.array[1]=23;
   s.top++;
   s.array[2]=80;
s.top++;
s.array[3]=89;
//Pop operation's implement.
   if(empty(s)){
   printf("Stack is underflow");
   }
   else{
   s.top++;
   s.top=s.array[s.top];
   printf("s%d\n",s.top);
   }
   }*_
   //Push operation's implement.
  /* if(full(s)){
   printf("Stack is overflow");
   }
  else{
  s.top++;
  s.array[s.top]=30;
 }
 for(int i=0;i<=s.size-1;i++){
 printf("%d\n",s.array[i]);
 }
 }
 //Peek operation.
 //Last in first out.
/*#include<stdio.h>
#include<stdlib.h>
   struct stack{
   int size;
   int top;
   int *array;
   };
   int empty(struct stack s){
   if(s.top==-1){
   return 1;
   }
   else{
   return 0;
   }
   }
   int full(struct stack s){
   if(s.top==s.size-2){
   return 1;
   }
   else{
   return 0;
   }
   }
   int peek(struct stack s,int position){
   if(s.top-position+1<0){
   printf("Not valid");
   return -1;
   }
   else{
   return s.array[s.top-position+1];
   }
   }
   int main(){
   struct stack s;
   s.size=10;
   s.top=-1;
   s.array=(int *)malloc(s.size*sizeof(int));
   s.array[0]=45;
  s.top++;
   s.array[1]=23;
   s.top++;
   s.array[2]=80;
s.top++;
s.array[3]=89;
s.top++;
s.array[4]=82;
s.top++;
//peek operation.
   for(int j=1;j<=s.top+1;j++){
   printf("The value is: %d\n",peek(s,j));
   }
 }*/
/*  #include<stdio.h>
 #include<stdlib.h>
    struct stack{
    int size;
    int top;
    int *array;
    };
    int empty(struct stack s){
    if(s.top==-1){
    return 1;
    }
    else{
    return 0;
    }
    }
    int full(struct stack s){
    if(s.top==s.size-2){
    return 1;
    }
    else{
    return 0;
    }
    }
    int peek(struct stack s,int position){
    if(s.top-position+1<0){
    printf("Not valid");
    return -1;
    }
    else{
    return s.array[s.top-position+1];
    }
    }
    int main(){
    struct stack s;
    s.size=10;
    s.top=-1;
    s.array=(int *)malloc(s.size*sizeof(int));
    s.array[0]=45;
   s.top++;
    s.array[1]=23;
    s.top++;
    s.array[2]=80;
 s.top++;
s.array[3]=89;
s.top++;
s.array[4]=82;
s.top++;
int j=5;
//Find first element.
  //  for(int j=1;j<=s.top+1;j++){
  //Find top element.
  //s.top=s.top-4;
    //printf("The value is: %d\n",peek(s,j));
 //  printf("The first element of stack is: %d",s.array[s.top]);
   //find bottom element.
   //s.top=s.top-2;
   printf("The bottom element of stack is: %d",s.array[s.top-2]);
  }*/
/*#include<stdio.h>
#include<stdlib.h>
   struct stack{
   int data;
 struct stack   *next;
// struct stack *top;
   };
   int empty(struct stack *top){
   if(top==NULL){
   printf("Stack is underflow");
   return 1;
   }
   else{
   return 0;
   }
   }
   int full(struct stack *s){
   struct stack*ptr=s;
   if(s->next==NULL){
   printf("Stack is overflow");
   return 1;
   }
   else{
   return 0;
   }
   }
   //stack operation of peek.
   int peek(struct stack*top){
   struct stack*ptr=top;
   for(int i=1;i<=5;i++){
   printf("The element on index number %d is %d\n\n",i,ptr->data);
   ptr=ptr->next;
   }
   return 0;
   }
   int main(){
   struct stack*s;
   struct stack *js;
   struct stack *jj;
   struct stack *sj;
   s=(struct stack*)malloc(sizeof(struct stack));
   js=(struct stack*)malloc(sizeof(struct stack));
   jj=(struct stack *)malloc(sizeof(struct stack));
   sj=(struct stack *)malloc(sizeof(struct stack));
   s->data=69;
   s->next=NULL;
   js->data=27;
   js->next=jj;
   jj->data=47;
   jj->next=sj;
   sj->data=83;
   sj->next=NULL;
   struct stack*top=s;
 // full(top);
 // empty(s);
  peek(top);
 }*/
/*#include<stdio.h>
#include<stdlib.h>
  struct stack{
  int data;
struct stack   *next;
struct stack *position;
// struct stack *top;
  };
  //stack operation of peek.
  int peek(struct stack*top,struct stack* position){
  struct stack*ptr=top;
  if(position+1<0){
  printf("Not vaild");
  return -1;
  }
  else{
  return ptr-position+1;
  }
  }
  int main(){
  struct stack*top;
  struct stack*s;
  struct stack *js;
  struct stack *jj;
  struct stack *sj;
  top=(struct stack*)malloc(sizeof(struct stack));
  s=(struct stack*)malloc(sizeof(struct stack));
  js=(struct stack*)malloc(sizeof(struct stack));
  jj=(struct stack *)malloc(sizeof(struct stack));
  sj=(struct stack *)malloc(sizeof(struct stack));
  s->data=69;
  s->next=js;
  top=s;
  js->data=27;
  js->next=jj;
  jj->data=47;
  jj->next=sj;
  sj->data=83;
  sj->next=NULL;
  int position=4;
  struct stack* p;
for(int i=1;i<=4;i++){
while(top->next!=NULL){
p=top->next;
}
printf("%d",peek(p,position));
}
}*/
/*#include<stdio.h>
#include<stdlib.h>

struct stack {
    int data;
    struct stack   *next;
};
struct stack*top=NULL;
void print(struct stack*pp) {
    struct stack*p=pp;
    do {
        printf("%d ",p->data);
        p=p->next;
    }
    while(p!=NULL);
}*/
//Empty operation in stack linked list.
/*int empty(struct stack*tp) {
    if(tp==NULL) {
        printf("Stack is undeflow\n");
        return 1;
    }
    else {
        return 0;
    }
}*/
//Full operation in stack linked list.
/*int full(struct stack*top) {
    struct stack*n;
    n=(struct stack*)malloc(sizeof(struct stack));
    if(n==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}*/
//Pop operation in stack linked list.
/*int pop(struct stack**top){
if(empty(*top)){
return 1;
}
else{
struct stack*n=*top;
int x;
*top=(*top)->next;
x=n->data;
free(n);
return x;
}
}*/
//Push operation in stack linked list.
/*int push(struct stack**top,int x) {
        struct stack*n=(struct stack*)malloc(sizeof(struct stack));
    if(n==NULL) {
        printf("Stack is underflow");
    }
    else {

        n->data=x;
        n->next=*top;
       *top=n;
        return *top;
    }
    }
int peek(int position) {
    struct stack*ptr=top;
    for(int i=0; i<position-1&&ptr!=NULL; i++) {
        ptr=ptr->next;
    }
    if(ptr!=NULL) {
        //printf("Peek operation is here: ");
        return ptr->data;
    }
    else {
        return 0;
    }
}
int stackbottom(struct stack*top){
struct stack*ptr=top;
while(ptr->next!=NULL){
ptr=ptr->next;
}
return ptr->data;
}
int main() {
    //empty(top);
    //struct stack*top=NULL;
    top=  push(&top,50);
    top=push(&top,60);
    top=  push(&top,97);
    top=  push(&top,32);
    top=  push(&top,63);
    top=  push(&top,17);
    //full(top);
    //    int element=pop(&top);
    //  printf("The popted element is: %d\n",  element);
    // printf("The top element from stack linked list is: %d\n",top->data);
    
        //  printf("The bottom element from stack linked list is: %d\n",p->data);
        for(int i=0;i<=6;i++){
        if(i!=0){
        printf("The value at index number %d is %d\n",i,peek(i));
        }
        }
        printf("\n");
        printf("The bottom element from stack linked list is: %d\n",stackbottom(top));
    //peek(6);
   // print(top);
    //  peek(top);
}*/
    