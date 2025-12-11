#include"Convert.hpp"

static bool isSpe(const std::string& l)
{
	if(l == "-inf" || l == "+inf" || l == "nan" || l == "-inff" || l == "+inff" || l == "nanf")
		return(1);

	return(0);
}

static bool isChar(const std::string& l)
{
	int len = l.length();

	if(len == 1 && !isdigit(l[0]))
		return(1);
	if(len == 3 && l[0] == '\'' && !isdigit(l[1]) && l[2] == '\'')
		return(1);

	return(0);
}

static bool isInt(const std::string& l)
{
	int i = 0;

	if(l[i] == '+' || l[i] == '-')
		i++;
	while(l[i])
	{
		if (!isdigit(l[i]))
			return(0);
		i++;
	}
	
	return(1);
}

static bool isFloat(const std::string& l)
{
	int i = 0;

	if(l[i] == '+' || l[i] == '-')
		i++;

	if(l[i] && isdigit(l[i]))
		i++;
	else
		return(0);

	while(l[i] && isdigit(l[i]))
		i++;

	if(l[i] && l[i] == '.')
		i++;
	else
		return(0);

	if(l[i] && isdigit(l[i]))
		i++;
	else
		return(0);

	while(l[i] && isdigit(l[i]))
		i++;

	if(l[i] == 'f')
		i++;
	else
		return(0);

	if(!l[i])
		return(1);

	return(0);
}

static bool isDouble(const std::string& l)
{
	int i = 0;
	
	if(l[i] == '+' || l[i] == '-')
		i++;

	if(l[i] && isdigit(l[i]))
		i++;
	else
		return(0);

	while(l[i] && isdigit(l[i]))
		i++;

	if(l[i] && l[i] == '.')
		i++;
	else
		return(0);

	if(l[i] && isdigit(l[i]))
		i++;
	else
		return(0);

	while(l[i] && isdigit(l[i]))
		i++;

	if(!l[i])
		return(1);

	return(0);
}

e_type find_type(const std::string& l)
{
	if(isSpe(l))
		return(SPE);
	if(isChar(l))
		return(CHAR);
	if(isInt(l))
		return(INT);
	if(isFloat(l))
		return(FLOAT);
	if(isDouble(l))
		return(DOUBLE);
	return(ERROR);
}
