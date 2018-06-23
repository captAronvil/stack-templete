#pragma once


template <typename S>

struct node_s

{

	S data;

	node_s<S>*prev;

};

template <typename S>


class Stack
{
	public:

		void push(S value);
		S pop();
	private:
		S data;  //S size;
		node_s<S> *top;
};

template <typename S>
void Stack<S>::push(S value) {
	node_s<S> *node = new node_s<S>;
	node->data = value;
	node->prev = top;
	top = node;
}

template <typename S>
S Stack<S>::pop()
{
	S newdata = top->data;
	node_s<S> *save_topptr;
	save_topptr = top;
	top = top->prev;
	delete save_topptr;
	return newdata;
}