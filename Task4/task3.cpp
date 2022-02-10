
#include <iostream>

using namespace std;
class node
{
    int data;
    node *next;
};
class linked{
    private:
    node head;
    public:
        linked(){
            head = nullptr;
        }
        void insert(int n,int p)
    {
        node *temp = new node;
        temp->data = n;
        temp->next = nullptr;
        if(p < 1){
            cout<<"error the postion should be morethan 1"
        }
        else if (p == 1){
            temp->next = head;
            head = temp;
        }
        else{
            node* temp2 = head;
            for(int i = 0 ;i <p-1;i++){
                if(temp2->next != nullptr){
                    temp2 = temp2->next;
                }
            }
            if(temp2 != null){
                temp->next = temp2->next;
                temp2->next = temp;
            }
            else{
                cout<<"invaild postion";
            }
        }
    };
        void deleteion(int p){
            if(p < 1){
            cout<<"error the postion should be morethan 1"
        }
        else if (p == 1){
            node *temp = head;
            head = temp->next;
            free(temp);
        }
        else{
            node* temp2 = head;
            for(int i = 0 ;i <p-1;i++){
                if(temp2->next != nullptr){
                    temp2 = temp2->next;
                }
            }
            if(temp2->next != null){
                node *temp = temp2->next->next;
                free(temp2->next);
                temp2->next = temp;
            }
            else{
                cout<<"invaild postion";
            }
        }
        };
        
};
int main()
{
    
    
}
