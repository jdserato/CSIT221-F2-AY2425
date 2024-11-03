 // Queue ADT
class Queue {
	public:
	virtual void enqueue(int) = 0;
	virtual int dequeue() = 0;
	// In both above & below fn, 
	// return -1, if empty queue.
	virtual int first() = 0;
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
};
