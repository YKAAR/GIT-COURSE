#include <iostream>

using namespace std;

template<typename T>
class Node {
    T val;
    Node<T>* next;

    template<typename L>
    friend class List; //friendship per accedere ai tipi private e protected di Node

    public:
        Node(T val) : val(val) {
            next = nullptr;
        }

        Node<T>* getNext() const {return this->next;}

        friend ostream& operator<<(ostream& os, const Node<T>& obj) { //stampa nodi
            os << "node@" << &obj.val << " val=" << obj.val << " - next=" << obj.next;
            return os;
        }
};

template<typename T>
class List {
    Node<T>* head;

    public:
        List() {head = nullptr;}

        bool isEmpty() { //controllo per la lista vuota
            return head == nullptr;
        }

        void insert(T val) {
            if(this->isEmpty()) {
                head = new Node<T>(val); //inserimento in lista vuota
            }
        }

        void insertHead(T val) { //inserimento in lista
            if(this->isEmpty()) {
                this->insert(val);
                return;
            }

            Node<T> *tmp = new Node<T>(val);
            tmp->next = head;
            this->head = tmp;
        }

        void insertTail(T val) {
            if(this->isEmpty()) {
                this->insertHead(val);
                return;
            }

            Node<T>* ptr = head;
            while(ptr->getNext() != nullptr) {
                ptr = ptr->getNext();
            }

            Node<T>* tmp = new Node<T>(val);
            ptr->next = tmp;
        }

        Node<T>* getHead() {return this->head;}

        friend ostream& operator<<(ostream& os, const List<T>& obj) { //stampa lista
            os << "List head=" << obj.head << endl;
            Node<T> *ptr = obj.head; //se uso ptr->next non stamperò un elemento
            while(ptr != nullptr) {
                os << "\t" << *ptr << endl;
                ptr = ptr->getNext(); //quì è meglio usare un metodo get che rendere l'ostream class friend in Node(nessuno può accedere ai campi di Node)
            }

            return os;
        }
};

int main() {

    cout << "\n";

    List<int> lista;
    
    lista.insertHead(10); //ultimo elemento
    //cout << lista.getHead() << endl;
    lista.insertHead(2);
    //cout << lista.getHead() << endl;
    lista.insertHead(67); //primo elemento
    //cout << lista.getHead() << endl;

    lista.insertTail(33);
    lista.insertTail(99);
    lista.insertTail(43);

    cout << lista << endl;

    return 0;
}