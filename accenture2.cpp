#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
// for(i=0;i<n;i++)
// for(auto it = m.begin();it!=m.end();it++)
// sort(a.begin(),a.end());

struct Node{
	int data;
	struct Node* next;
};



struct Node* MovekNodes(struct Node* head,int n,int k){
	Node* temp = head;
	int t = n+k-2;
	while(t--){
		temp=temp->next;
	}
	int m = n-1;
	while(m--){
		Node* insert = head;
		head=head->next;
		insert->next=temp->next;
		temp->next=insert;
	}
	return head;
}



int main(){

Node* head = NULL;


}
