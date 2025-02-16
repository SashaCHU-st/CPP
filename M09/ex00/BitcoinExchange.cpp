#include "BitcoinExchange.hpp"
BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}
int BitcoinExchange::openData(const std::string& data)
{
    std::ifstream file(data);

    if(!file.is_open())
    {
        std::cout<< "cannot open" << std::endl;
        return 1;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t pos = line.find(',');
        if(pos!=std::string::npos)
        {
            std::string dates = line.substr(0, pos);
            std::string amount = line.substr(pos + 1,std::string::npos);
            float price = std::stof(amount);
            rates[dates] = price;
        }
    }
    file.close();
    return(0);
}

int BitcoinExchange::validateDates(int yearInt, int monthInt, int dateInt)
{

    if(yearInt > 2022 || yearInt < 2009 || monthInt > 12 || monthInt < 1 || dateInt > 31 || dateInt < 1)
    {
        return(1);
    }
    if(monthInt == 1 || monthInt == 3 || monthInt == 5 || monthInt == 7 || monthInt == 8 || monthInt == 10 || monthInt == 12)
    {
        if(dateInt > 31)
            return (1);
    }

    if (monthInt == 2) 
    {
        if ((yearInt % 400 == 0) || (yearInt % 4 == 0 && yearInt % 100 != 0)) 
        {
            if (dateInt > 29)
                return 1;
        } 
        else 
        {
            if (dateInt > 28)
                return 1;
        }
    }
    return(0);
}

int BitcoinExchange::validatePrice(int priceInputDouble)
{
    if(priceInputDouble < 0.1)
    {
        std::cout << "Error: not a positive number."<< std::endl;
        return(1);
    }
    else if(priceInputDouble > 1000)
    {
        std::cout << "Error: too large a number. "<< std::endl;
        return(1);
    }
    return(0);
}
int BitcoinExchange::validate(std::string datesInput, std::string priceInput)
{
    std::string year = datesInput.substr(0, 4);
    std::string month = datesInput.substr(5, 2);
    std::string date = datesInput.substr(8, 2);

    int yearInt = stoi(year);
    int monthInt= stoi(month);
    int dateInt = stoi(date);

    double priceInputDouble = stod(priceInput);
    if(validateDates(yearInt, monthInt, dateInt) == 1)
    {
        return (1);
    }
    if(validatePrice(priceInputDouble) == 1)
        return(1);
    auto it = rates.lower_bound(datesInput);/// return iterator greater or equal to datesInput
    if (it == rates.end() || it->first != datesInput)
    {
        if (it == rates.begin())
            return 1;
        --it;
    }
    std::cout << datesInput << "=> " << priceInputDouble << " = " << it->second * priceInputDouble << std::endl;
    return(0);

}

int BitcoinExchange::inputData(const std::string& inputData)
{
    std::ifstream file(inputData);

    if(!file.is_open())
    {
        std::cout<< "cannot open" << std::endl;
        return 1;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (*(line.end()-1) == '|' || line.length() < 11 ) //2001-42-42 |
		{
			std::cerr << "Error: bad input" << "=> " << line <<std::endl;
            continue; // no value
		}
        size_t pos = line.find('|');
        if(pos!=std::string::npos)
        {
            std::string datesInput = line.substr(0, pos);
            std::string priceInput = line.substr(pos + 1);
            validate(datesInput, priceInput);
        }
    }
    file.close();
    return(0);
}