#include <iostream> 
#include "stack.h" 
#include "conio.h"

using namespace std;

int main()

{
	Stack<int> stack;
	int n = 6;

	for (int i = 0; i < n; i++)
	{
		stack.push(i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << stack.pop() << endl;
	}

	Stack<char> stackch;

	stackch.push('w');
	stackch.push('a');
	stackch.push('z');
	stackch.push('a');
	stackch.push('p');
	stackch.push('!');

	cout << endl << endl;

	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;

	_getch();
	return 0;
}