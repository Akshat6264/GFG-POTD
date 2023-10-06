/*

Author : Akshat Kelotra
Date : 06/10/2023
Problem : Reverse alternate nodes in Link List
Difficulty : Medium
Problem Link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

*/

//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    struct Node *reverse(struct Node* head){
        Node* current=head;
        Node* nextnode=head;
        Node* prev=NULL;
        while(current){
            nextnode=current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        if(!odd || !odd->next) return ;
        struct Node *even=odd->next;
        struct Node *even_head=even;
        while( odd->next && even->next){
            struct Node *en=even->next->next;
            struct Node *on=odd->next->next;
            odd->next=on;
            even->next=en;
            odd=odd->next;
            even=even->next;
            
        }
        even_head=reverse(even_head);
        odd->next=even_head;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends