
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
public:
    node *head,*tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
	void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};
int main() {
	int num;
	cin >> num;		
	cout << "Input number is " << num << endl;
	linked_list arr;
	while(num > 0){
	int a,b;
	cin>>a;cin>>b;
	for(int i =0;i<a;i++){
		int z;cin>>z;
		arr.add_node(z);
	}
	bool deletefriend = false;
	node* temp = arr.head;
	for(int i = 0;i<a-1;i++){
		if (temp->data > temp->next->data){
			delete(temp);
			deletefriend = true;
			break;
		}
	}
	if(!deletefriend){
		node* temp2 = arr.head;
		while(temp2->next != NULL){
			temp2 = temp2->next;
		}
		delete(temp2);
	}
	num--;
	}
	node* temp = arr.head;
	while(temp->next != NULL){
	    cout<<temp->data<<endl;
	    temp = temp->next;
	}
}
//I know this code is wrong but I amn't familar with this site especially handling the input and the output