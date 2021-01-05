#include <iostream>
using namespace std;
/*defining the max size of array*/
#define Max_size 5

/*defining the queue struct*/
class AQueue {
public:
	/*declaring array container for queue*/
	int queue_array[Max_size];
	int front;
	int rear;

	/*defining the constructor*/
	AQueue() {
		front = 0;
		rear = 0;
		/*initilizing initilly by zero */
		for (int i = 0; i < Max_size - 1;	i++) {
			queue_array[i] = 0;
		}
	}
	/*implementation of all methods used in queue*/

	/*. bool isEmpty() – checks if the queue is empty or not  */
	bool isEmpty() {
		if (front == rear)
			return true;
		else
			return false;
	}
	/* bool isFull() – checks if the queue is full or not*/
	bool isFull() {
		if (rear == Max_size)
			return true;
		else
			return false;
	}
	/*void Enqueue(element) – add an element at the rear end of the queue */
	void EnQueue(int value) {
		if (!isFull())
		{
		    queue_array[rear]= value;
			cout << "the value : " << value << " is enqueued!!!\n";
			rear++;
		}
		else
		{
			cout << "queue is Full !!!!!\n";
		}
	}
	/*element Dequeue() – removes and display the element from the front end of the queue */
	void DeQueue() {
		if (!isEmpty()) {	
			queue_array[front++];
		}
		else {
			cout << "queue is empty !!!!!! so value cannot be dequeued.\n";
		}
	}
	/*prints the values of queue */
	void printQueue() {
		if (!isEmpty())
		{
			for (int i = front; i < rear; i++) {
				cout << "queue[" << i << "] = " << queue_array[i] << endl;
			}
		}
		else
		{
			cout << "queue is empty\n";
		}
	}
	/*– display the contents of first element of queue at front location */
	void printFront() {
		if (!isEmpty()) {
			cout << "front element in queue is: " << queue_array[front];
		}
		else
			cout << "list is empty\n";
	}
	/*void Clear() – release the memory allocated by queue */
	void clear() {
		front = 0;
		rear = 0;
		printQueue();
	}
};


/***************************************************************************************************
			"HERE GOES OUR MAIN CODE FOR TESTING THE ARRAY BASED STACK FUNCTIONS"
****************************************************************************************************/

int main() {
	/*creating queue object*/
	AQueue obj;
	cout << "###############################################################################\n\t\tARRAY BASED QUEUE \n###############################################################################\n";

	cout << "\n-----------------------------------------------------------------------------\n";
	cout << endl<<"EN_QUEUEING ELEMENTS 1,2,3,4 IN QUEUE \n";
	obj.EnQueue(1);
	obj.EnQueue(2);
	obj.EnQueue(3);
	obj.EnQueue(4);
	cout << "\n-----------------------------------------------------------------------------\n";
	cout << endl<< "printing the queue ........\n";
	obj.printQueue();
	cout << "\n-----------------------------------------------------------------------------\n";
	cout <<endl<< "(1)DE_QUEUEING from queue......\n";
	obj.DeQueue();
	obj.printQueue();
	cout << endl << "(2)DE_QUEUEING from queue......\n";
	obj.DeQueue();
	obj.printQueue();
	cout << "\n-----------------------------------------------------------------------------\n";
	cout << endl << "EN_QUEUEING ELEMENTS 5,6,7 IN QUEUE \n";
	obj.EnQueue(5);
	obj.EnQueue(6);
	obj.EnQueue(7);
	cout << "\n-----------------------------------------------------------------------------\n";
	cout << endl << "printing the queue ........\n";
	obj.printQueue();
	cout << "\n-----------------------------------------------------------------------------\n";
	cout << "clearing the queue................ \n";
	obj.clear();
}

