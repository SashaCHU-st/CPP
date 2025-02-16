#pragma once
#include <iostream>
#include <algorithm>// for erase
#include <map>
#include <fstream>
#include <string.h>

class BitcoinExchange
{
    private:
        std::map<std::string, float> rates;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        int openData(const std::string& data);
        int inputData(const std::string& inputData);
        int validate(std::string datesInput, std::string priceInput);
        int validateDates(int yearInt, int monthInt, int dateInt);
        int validatePrice(int priceInputDouble);
};

