#pragma once
#include <iostream>
/**
*Function: stringTok
* Description, tokenizes an input string by reference, Tok, and returns the right side of the input
* Input Parameters: string stringToTokenize, string delimeter
* Output Parameters: string rightSide
**/
static	std::string stringTok(std::string &line, std::string del)
{
	int pos = 0;
	std::string token="";
	pos = line.find_first_of(del);
	{
		if (line.find_first_of(del) == -1)
		{
			return line;
		}
	}

	token = line.substr(0, pos);
	line = line.substr(pos + 1, line.size());
	return token;
}


