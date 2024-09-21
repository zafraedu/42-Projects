#pragma once

#include <iostream>
#include <cctype>
#include <string>

template <typename T>

/**
 * @brief  iterates over your array and applies the function on each element until arr_len is hit
 * @note   the function has to be a void function that takes a `T &`, otherwise it wont compile
 * @param  *array: the input array with type of your choice
 * @param  arr_len: the length of your array
 * @param  (*foo: the function you want to have used on every element of your array
 * @retval None
 */
void iter(T *array, size_t arr_len, void (*foo)(T &))
{
	if (array == NULL || foo == NULL)
		return;
	for (size_t i = 0; i < arr_len; i++)
		foo(array[i]);
}
