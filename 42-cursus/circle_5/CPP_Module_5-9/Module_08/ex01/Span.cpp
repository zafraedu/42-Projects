#include "Span.hpp"

// Constructors
Span::Span(): _size(0), _pos(0) //is private --> unusable and unnecessary
{
}

Span::Span(unsigned int N): _size(N), _pos(0)
{
	std::cout << "Span Constructor for size of " << N << " called" << std::endl;
	this->_storage.reserve(this->getSize());
}

Span::Span(const Span &src): _size(src.getSize()), _pos(src.getPos())
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = src;
}

// Deconstructors
Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
}

// Overloaded Operators
Span	&Span::operator=(const Span &src)
{
	std::cout << "Span Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	/*CODE*/
	return *this;
}

// Public Methods

/**
 * @brief  puts number into the vector of the Span class
 * @note   also the _pos is counted up, if all elements are filled, an exception is thrown
 * @param  number: the integer to add
 * @retval None
 */
void	Span::addNumber(int number)
{
	if ((this->_pos != 0 && this->_storage.empty() == true) || this->_storage.max_size() < this->getSize())
		throw (Span::VectorInvalidException());
	if (this->getPos() + 1 > this->getSize())
		throw (Span::ArrayFullException());
	else
	{
		this->_pos++;
		this->_storage.push_back(number);
	}
	// std::cout << "added " << number << std::endl; // prints each number that got added
}

/**
 * @brief  fills range elements with random numbers
 * @note   the random numbers depend on the time_t seed that is passsed
 * @param  range: number of elements to fill
 * @param  seed: the seed for the random function
 * @retval None
 */
void	Span::addNumber(unsigned int range, time_t seed)
{
	srand(seed);
	for (size_t i = 0; i < range; i++)
	{
		try
		{
			addNumber(rand());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_pos == 1 || this->_storage.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> v(this->_storage);			// 10 20 30 30 20 10 10 20

	std::sort (v.begin(), v.end());				// 10 10 10 20 20 20 30 30

	unsigned int ret = UINT_MAX;
	std::vector<int>::iterator temp_it = v.begin();
	std::vector<int>::iterator temp_it_next = v.begin() + 1;
	while (temp_it_next != v.end())
	{
		if ((unsigned int)(*temp_it_next - *temp_it) < ret)
			ret = *temp_it_next - *temp_it;
		++temp_it_next;
		++temp_it;
	}
	return (ret);
}

unsigned int	Span::longestSpan(void)const
{
	if (this->_pos == 1 || this->_storage.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> v(this->_storage);			// 10 20 30 30 20 10 10 20
	int low, high;

	std::sort (v.rbegin(), v.rend());			// 30 30 20 20 20 10 10 10
	high = *v.begin();

	std::sort (v.begin(), v.end());				// 10 10 10 20 20 20 30 30
	low = *v.begin();

	return (high - low);
}

// Getter
unsigned int	Span::getSize() const
{
	return (this->_size);
}

unsigned int	Span::getPos() const
{
	return (this->_pos);
}

// Setter

// Exceptions
const char	*Span::VectorInvalidException::what() const throw()
{
	return ("Error: Invalid or broken vector");
}

const char	*Span::ArrayFullException::what() const throw()
{
	return ("Error: Array full");
}

const char	*Span::ComparisonInvalidException::what() const throw()
{
	return ("Error: more than one element in vector needed to be compared");
}
