#include"LangParser.h"
int main() {
	LangParser* langparser = new LangParser();
	langparser->ParseStr("#func", "!#");
}