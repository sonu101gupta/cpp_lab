#include <iostream>
using namespace std;

struct nod {
    int info;
    struct nod* next;
};

typedef struct nod node;

class list {
    node* f;

public:
    list() {
        f = NULL;
    }

    void ins(int num) {
        node* p = new node;
        p->info = num;
        p->next = f;
        f = p;
        cout << "Element inserted\n";
    }

    void del() {
        node* temp = f;

        if (f == NULL)
            cout << "No elements to delete\n";
        else {
            cout << "The deleted element is " << f->info << "\n";
            f = f->next;
            delete temp;
        }
    }

    void disp() {
        node* temp = f;

        if (f == NULL)
            cout << "\nList is empty \n";
        else {
            cout << "\nElements in the list are:\n";
            while (temp != NULL) {
                cout << " " << temp->info << "\n";
                temp = temp->next;
            }
        }
    }
};

int main() {
    int num, ch = 1;
    list ob;

    cout << "\n1-Insert 2-Delete 3-Display 4-Exit\n";

    while (ch) {
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\nEnter element to be inserted: ";
                cin >> num;
                ob.ins(num);
                break;
            case 2:
                ob.del();
                break;
            case 3:
                ob.disp();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice \n";
                break;
        }
    }

    return 0;
}
