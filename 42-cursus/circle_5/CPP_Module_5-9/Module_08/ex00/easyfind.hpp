#pragma once

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Not found");
			}
};

template< typename T>
typename T::iterator easyfind(T &in, int i)
{
	typename T::iterator	it;
	it = find(in.begin(), in.end(), i);
	if (it == in.end())
	{
		throw (NotFoundException());
	}
	return (it);
}
