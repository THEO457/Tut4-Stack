#ifdef STACK2_EXPORTS
#define STACK2_API __declspec(dllexport)
#else
#define STACK_API __declspec(dllimport)
#endif

// This class is exported from the Stack.dll
class STACK_API CStack {

private:
	typedef struct node
	{
	int data;
	node *pre;
	}Node;

	Node *n;
	Node *t;
	Node *h;
	int currentnode, peekval, size, sizecount;

public:
	CStack();
	CStack(int);
	bool push(int);
	bool pop();
	bool peek();
	bool isFull();
	bool isEmpty();
	// TODO: add your methods here.
};

extern STACK_API int nStack;

STACK_API int fnStack(void);
