/*
#include "LangParser.h"
#include <iostream>

LangParser::LangParser()
{
	
}

void LangParser::ParseStr(std::string str_dat, std::string str_in)
{
	
	try {
		tao::pegtl::string_input str_input(str_dat, str_in);
		tao::pegtl::parse<Grammer>(str_input);
			std::cout << str_input.begin();
		
	
	}
	catch (tao::pegtl::parse_error e) {
		std::cout << e.what() << std::endl;
	}
	
	
}

void LangParser::ParseFile(std::string path)
{
	
	tao::pegtl::file_input file_input(path);
	
}
*/