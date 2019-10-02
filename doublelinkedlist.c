/*
double linked list...............
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node node;
struct node
{  int roll_no;
   char name[20];
   float CGPA;
   node* left;
   node* right;
};

int length(node* first)
{   int x=0;
  while(first!=NULL)
  {    x++;
    first=first->right;
  }
  return x;
}
node* create(node **first)
{
  node* temp=(node* )malloc(sizeof(node)*1);
  printf("enter roll_no------\n");
  scanf("%d",&(temp->roll_no));
  printf("enter name------\n");
  scanf("%s",temp->name);
  printf("enter CGPA------\n");
  scanf("%f",&(temp->CGPA));
  temp->right=NULL;
  temp->left=NULL;
  *first=temp;
}

node* frontinsert(node** first)
{   node* temp=(node* )malloc(sizeof(node)*1);
  printf("enter roll_no------\n");
  scanf("%d",&(temp->roll_no));
  printf("enter name------\n");
  scanf("%s",temp->name);
  printf("enter CGPA------\n");
  scanf("%f",&(temp->CGPA));
  temp->right=*first;
  temp->left=NULL;
  (*first)->left=temp;
     *first=temp;
}

node middleinsert(node* first,int p)
{
  node* temp=(node* )malloc(sizeof(node)*1);
  printf("enter roll_no------\n");
  scanf("%d",&(temp->roll_no));
  printf("enter name------\n");
  scanf("%s",temp->name);
  printf("enter CGPA------\n");
  scanf("%f",&(temp->CGPA));
     p=p-2;
     while(p--)
     {
      first=first->right;
     }
     first->right->left=temp;
     temp->left=first;
     temp->right=first->right;
     first->right=temp;
}

node append(node* first)
{
    node* temp=(node* )malloc(sizeof(node)*1);
  printf("enter roll_no------\n");
  scanf("%d",&(temp->roll_no));
  printf("enter name------\n");
  scanf("%s",temp->name);
  printf("enter CGPA------\n");
  scanf("%f",&(temp->CGPA));
  while(first->right!=NULL)
  {
    first=first->right;
  }
  first->right=temp;
  temp->left=first;
  temp->right=NULL;
}

node*  firstdelete(node **first,int len)
{
  if(len>1){
    (*first)=(*first)->right;
    (*first)->left=NULL;
  }
  if(len==1)
    {  printf("linked list is empty!!!!!!!!!\n");
        free(*first);
    }
}

node* middledelete(node* first,int pos,int len)
{
  if(pos<2)
    {  if(pos==len)
       {printf("it is not a middle positin----- \n");}
       else
        {printf("invalid position!!!!!\n");}
    }
   else if(pos==2)
   {
       first->right=first->right->right;
   }
   else
    {
     while(pos>2)
     {
      first=first->right;
      pos--;
     }
     first->right=first->right->right;
     (first->right->right)->left=first;
 }
}

void lastdelete(node* first,int len)
{    if(len==1)
    {
      printf("invalid!!!!!!\n");
    }
    else{
   while(first->right->right!=NULL)
  {
    first=first->right;
  }
  first->right=NULL;
     }
}

void display(node* first)
{
  while(first->right!=NULL)
  {
    printf("roll_no =%d  ",first->roll_no);
    printf(">>>name= %s  ",first->name);
    printf(">>>CGPA= %f \n-----------\n",first->CGPA);
    first=first->right;
  }
      printf("roll_no =%d  ",first->roll_no);
    printf(">>>name= %s  ",first->name);
    printf(">>>CGPA= %f \n",first->CGPA);
  printf("-------------------------------------n\n");
  while(first->left!=NULL)
  {   printf("roll_no =%d  ",first->roll_no);
    printf(">>>name= %s  ",first->name);
    printf(">>>CGPA= %f \n-------------\n",first->CGPA);
    first=first->left;
  }
      printf("roll_no =%d  ",first->roll_no);
    printf(">>>name= %s  ",first->name);
    printf(">>>CGPA= %f \n",first->CGPA);
  printf("-------------------------------------n\n");
}


int main()
{
   node* first=(node*)malloc(sizeof(node)*1);
   first->right=NULL;
   first->left=NULL;
   int p,xx=1;
   while(xx){
   printf("for crate node enter---0\nfor insert enter-----1\nfor delete enter----2\nfor diplay enter----3\nfor exit enter----4\nfor length enter---5\nfor find using roll_no---6\nfor find using name----7\nfor find using cgpa---8\n");
   scanf("%d",&p);
   switch(p)
   {     case 0:
             create(&first);
             break;
        case 1:
             printf("enter 1 for front insert\nenter 2 for middle insert\nenter 3 for append\n\n\n\n");
             scanf("%d",&p);
             if(p==1)
             {
                 frontinsert(&first);
             }
             else if(p==2)
             {   printf("enter a position\n\n\n");
                   scanf("%d",&p);
                 if(p==1)
                 {frontinsert(&first);}
                 else
                  middleinsert(first,p);
             }
             else if(p==3)
             {
                  append(first);
             }
             break;
        case 2:
           printf("for first node deletion enter---1 \nfor middle node deletion enter---2\nfor last node deletion enter----3\n");
           scanf("%d",&p);
           if(p==1)
           {
                firstdelete(&first,length(first));
           }
           else if(p==2)
           {   printf("enter position \n");
                 scanf("%d",&p);
              middledelete(first,p,length(first));

           }
           else if(p==3)
           {   lastdelete(first,length(first));
           }
           break;
        case 3:
            display(first);
            break;
        case 4:
            xx=0;
            break;
        case 5:
            printf("linked list length is= %d\n",length(first));
            break;
        case 6:
             printf("enter valid roll no-----\n");
           // findbyrollno(first);
            break;
        case 7:
            printf("enter valid name-------\n");
           // findbyname(first);
            break;
        case 8:
            printf("enter cgpa-----\n");
           // findbycgpa(first);
            break;
   }
}
  return 0;
}
