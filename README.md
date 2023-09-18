# Data-Structures-LinkedList-
program using C++ language to implement singly linked list


##Problem Statement:

You are required to make a program using C++ language to implement singly linked list. You need to create a linked list with NUMERIC digits of your VU id, after that distinguish them into two separate linked list according to odd/even, and then at the end merge these two lists into a single linked list. 


##Step By Step Procedure:
    1. Create a linked list.
    2. Fill the linked list while taking input on console, in such a way that user enters the NUMERIC digits of their VU ID, one by one. For example, if we consider BC123456789, then BC would be ignored and you only have to insert 1 2 3 4 5 6 7 8 9 one by one, in the linked list. (as shown in the screenshot below).
    3. After filling your linked list, now you need to create two other linked list one for odd numbers and the other for even numbers.
    4. Now, filter out the digits one by one, and put them in their respective linked list. For example, if your VU ID is BC123456789, then 1,3,5,7,9 would be inserted in the odd linked list while 2,4,6,8 would be inserted in even linked list.
    5. After creating two separate linked list, merge them into a single one in such a way that odd one should be inserted first and then the even linked list. 
    6. As an output, your code should display, odd digits of your vu id, even digits of your vu id and then the merged list at the end (as shown in the screenshot below)

Important Instructions:
You need to fulfill the following requirements while solving the assignment task. 
    1. Use only user defined classes for Node and List, the use of struct is not allowed.
    2. The structure of Node and List classes should be similar to the structure given below. If you will create extra data members then your marks will be deducted. 
    3. You need to use your actual VU ID, otherwise marks would be deducted.  
    4. Screenshot is attached for your reference. 


Classes Structure:

![image](https://github.com/amna-rahman/Data-Structures-LinkedList-/assets/109412864/c9f27af4-0e9b-4f84-8cbb-ec5a19f59a9d)



Graphical Representation on the basis of (VU ID: BC123456789):

Initial Linked List
![image](https://github.com/amna-rahman/Data-Structures-LinkedList-/assets/109412864/32167597-8bcb-4548-8a4c-545f8f114cc2)

![image](https://github.com/amna-rahman/Data-Structures-LinkedList-/assets/109412864/172d0ded-3d0a-42cb-871c-5d6259415327)
![image](https://github.com/amna-rahman/Data-Structures-LinkedList-/assets/109412864/420184d4-0433-471d-a61a-81cda6dc12e4)



Sample Output:
![image](https://github.com/amna-rahman/Data-Structures-LinkedList-/assets/109412864/b05c5649-48f3-42a0-9614-6a0370ccf8e1)

