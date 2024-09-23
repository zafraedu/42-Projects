#include "MutantStack.hpp"

int main()
{
	// creation of a string stack
	MutantStack<std::string> mstack_string;
	mstack_string.push("Five");
	mstack_string.push("Seventeen");
	mstack_string.pop();
	mstack_string.push("Three");
	mstack_string.push("Seven hundred thirty-seven");

	// creation of a int stack
	MutantStack<int> mstack;
	mstack.push(5);		// addding 5
	mstack.push(17);	// adding 17
	mstack.pop();		// deleting 17
	mstack.push(3);		// adding 3
	mstack.push(737);	// adding 737

	std::cout << std::endl;

	// start working with string stack ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
	MutantStack<std::string>::iterator s_it = mstack_string.begin();
	MutantStack<std::string>::iterator e_it = mstack_string.end();

	++s_it;
	--s_it;
	std::cout << "String Iterator: ";
	while (s_it != e_it)
	{
		std::cout << *s_it << ", ";
		++s_it;
	}

	std::cout << std::endl << std::endl << "↓↓↓ String Stack Information ↓↓↓\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
	mstack_string.pop();
	mstack_string.pop();
	mstack_string.pop();
	std::cout << std::endl << std::endl << "↓↓↓ String Stack Information ↓↓↓\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
	// end working with string stack ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

	std::cout << std::endl << "-------------------------------------------------------------------" << std::endl << std::endl;

	// start working with int stack ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
	MutantStack<int>::iterator it_s = mstack.begin();
	MutantStack<int>::iterator it_e = mstack.end();

	++it_s;
	--it_s;

	std::cout << "Int Iterator: ";
	while (it_s != it_e)
	{
		std::cout << *it_s << "` ";
		++it_s;
	}

	std::cout << std::endl << std::endl << "↓↓↓ Int Stack Information ↓↓↓\nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl << std::endl;
	// end working with int stack ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

	return 0;
}
