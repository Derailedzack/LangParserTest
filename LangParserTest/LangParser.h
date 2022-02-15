#pragma once
//TODO:Convert to lexy
#include<string>
#include<lexy/dsl.hpp>
#include<lexy/callback.hpp>
constexpr auto Test = lexy::dsl::identifier(lexy::dsl::ascii::alpha_underscore);
struct test_decl {
	static constexpr auto rule = Test + Test;
};
struct production {
	static constexpr auto rule = [] {
		//auto funcdecl = lexy::dsl::must(lexy::dsl::ascii::alpha) + LEXY_LIT("func");
	
		return nullptr;
	}();
	static constexpr auto value = lexy::as_string<std::string>;

};
/*
#include<pegtl.hpp>
class LangParser
{
private:
	


	struct FunDecl : tao::pegtl::one<'func', 'fun'> {};
	struct FunReturnType : tao::pegtl::alpha {};
	struct FuncImpl : tao::pegtl::must<FunReturnType>, tao::pegtl::opt<FunDecl> {};
	struct Grammer: tao::pegtl::must<tao::pegtl::must<tao::pegtl::shebang>,FunDecl>{};
public:
	
	LangParser();
	void ParseStr(std::string str_dat, std::string str_in);
	void ParseFile(std::string path);
};
*/

