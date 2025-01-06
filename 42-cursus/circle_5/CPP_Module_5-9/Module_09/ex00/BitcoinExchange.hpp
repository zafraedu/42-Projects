#ifndef BTC_H
# define BTC_H

# include <fstream>
# include <iostream>
# include <map>
# include <string>
# include <stdio.h>
# include <sstream>
# include <cstdlib>

class BitcoinExchange
{
  private:
	struct
	{
		float	value;
		std::string date;
	} LineData;
	std::map<std::string, float> btcData;
  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();
	void fillData(std::string string);
	void handleInputFile(std::string fileName);
	void checkValues( float value);
	void checkDate(int year, int month, int day);
	int isLeapYear(int year);
	void findDateAndCalculate();
	void printMap();
};

#endif
