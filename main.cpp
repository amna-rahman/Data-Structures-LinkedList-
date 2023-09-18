//bc220406761

#include <iostream>
using namespace std;


//user defined class Node
class Node {
private:
    int data;
    Node* nextNode;

public:
    void set(int value) {
        data = value;
    }

    int get() {
        return data;
    }

    void setNext(Node* next) {
        nextNode = next;
    }

    Node* getNext() {
        return nextNode;
    }
};


//user defined class List
class List {
private:
    Node* headNode;
    Node* currentNode;
    Node* lastCurrentNode;

public:
    List() {
        headNode = NULL;
        currentNode = NULL;
        lastCurrentNode = NULL;
    }

    Node* get() {
        return headNode;
    }

    void add(int value) {
        Node* newNode = new Node();
        newNode->set(value);
        newNode->setNext(NULL);

        if (headNode == NULL) {
            headNode = newNode;
            lastCurrentNode = newNode;
        } else {
            lastCurrentNode->setNext(newNode);
            lastCurrentNode = newNode;
        }
    }

    void next() {
        if (currentNode == NULL) {
            currentNode = headNode;
        } else {
            currentNode = currentNode->getNext();
        }
    }

// non member functions declared friend of List class
    friend void traverse(List list);
    friend List addNodes();
    friend List mergeLists(List oddList, List evenList);
};



// Non Member functions (traverse,addNodes,mergeLists)
void traverse(List list) {
    Node* current = list.headNode;
    while (current != NULL) {
        cout << "    List Element: "<< current->get() << endl;
        current = current->getNext();
    }
    cout << endl;
}

List addNodes() {
    List list;
    int input;
    
    for (int i = 0; i < 9; ++i) {
    cout << "Enter numeric character of your VU ID:" << endl;
        cin >> input;
        list.add(input);
    }
    return list;
}

List mergeLists(List oddList, List evenList) {
    List mergedList;

    Node* oddCurrent = oddList.get();
    Node* evenCurrent = evenList.get();

    while (oddCurrent != NULL) {
        mergedList.add(oddCurrent->get());
        oddCurrent = oddCurrent->getNext();
    }

    while (evenCurrent != NULL) {
        mergedList.add(evenCurrent->get());
        evenCurrent = evenCurrent->getNext();
    }

    return mergedList;
}



int main() {
    List inputList = addNodes();  //Taking input in a list

    List oddList;
    List evenList;                    //declaring list for odd and even 

    Node* current = inputList.get();     //getting current pointer
     
    while (current != NULL) {
        int digit = current->get();
        if (digit % 2 == 0) {
            evenList.add(digit);
        } else {
            oddList.add(digit);
        }
        current = current->getNext();
    }                                        //filter out the digits and put them in odd and even list
    
cout << "\n********* OUTPUT ************** "<< endl;

    cout << "\nOdd List: "<< endl;
    traverse(oddList);                     //outputs oddList

    cout << "Even List: "<< endl;
    traverse(evenList);                   //outputs evenList 

    List mergedList = mergeLists(oddList, evenList);              //merge odd and even list

    cout << "Merged List: "<< endl;
     traverse(mergedList);                       //outputs merged list

    return 0;
}
