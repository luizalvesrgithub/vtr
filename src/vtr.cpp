/*
 * vtr.cpp
 *
 *  Created on: 26 de jan de 2022
 *      Author: t317542
 */

#include <iostream>
#include <fstream>
#include <string>

#include <sstream>

void leituraDeArquivoLinhaAlinha() {
	// greet the user
	std::string name;
	std::cout << "What is your name? ";
	std::getline(std::cin, name);
	std::cout << "Hello " << name << ", nice to meet you.\n";

	// read file line by line
	std::istringstream input;
	input.str("1\n2\n3\n4\n5\n6\n7\n");
	int sum = 0;
	for (std::string line; std::getline(input, line);) {
		sum += std::stoi(line);
	}
	std::cout << "\nThe sum is: " << sum << "\n\n";

	// use separator to read parts of the line
	std::istringstream input2;
	input2.str("a;b;c;d");
	for (std::string line; std::getline(input2, line, ';');) {
		std::cout << line << '\n';
	}
}

void leituraGravacaoSimples() {

}
int main() {
	leituraGravacaoSimples();


	std::string str("There are two needles in this haystack with needles.");
	std::string str2("needle");
	std::string tjdft("TJDFT");

	//leituraDeArquivoLinhaAlinha();

	std::string nomeArquivo;
	std::cout << "Informe o nome do arquivo a ser tratado:  ";
	std::getline(std::cin, nomeArquivo);
	/*std::ofstream os(nomeArquivo, std::ofstream::out);
	if(os.is_open()){
		os << "Primeira linha ";
		os.close();
	}*/
	std::ifstream is(nomeArquivo, std::ifstream::in);
	if (is.is_open()) {
		std::cout << "Arquivo " << nomeArquivo << " Aberto" << '\n';
		for (std::string line; std::getline(is, line);) {
			std::cout << line << '\n';
			std::size_t poselo = line.find(tjdft);
			if (poselo != std::string::npos)
				std::cout << "first 'TJDFT' found at: " << poselo << '\n';

		}
	}
    is.close();
	// different member versions of find in the same order as above:
	std::size_t found = str.find(str2);
	if (found != std::string::npos)
		std::cout << "first 'needle' found at: " << found << '\n';

	found = str.find("needles are small", found + 1, 6);
	if (found != std::string::npos)
		std::cout << "second 'needle' found at: " << found << '\n';

	found = str.find("haystack");
	if (found != std::string::npos)
		std::cout << "'haystack' also found at: " << found << '\n';

	found = str.find('.');
	if (found != std::string::npos)
		std::cout << "Period found at: " << found << '\n';

	// let's replace the first needle:
	str.replace(str.find(str2), str2.length(), "preposition");
	std::cout << str << '\n';
	for (std::string line; std::getline(is, line);) {
		std::cout << line << '\n';
		std::size_t poselo = line.find(tjdft);
		if (poselo != std::string::npos)
			std::cout << "first 'TJDFT' found at: " << poselo << '\n';

	}

	std::string filename = "Test.b";
	// prepare a file to read
	double d = 3.14;
	std::ofstream(filename, std::ios::binary).write(reinterpret_cast<char*>(&d),
			sizeof d) << 123 << "abc";
	// open file for reading
	std::ifstream istrm(filename, std::ios::binary);
	if (!istrm.is_open()) {
		std::cout << "failed to open " << filename << '\n';
	} else {
		double d;
		istrm.read(reinterpret_cast<char*>(&d), sizeof d); // binary input
		int n;
		std::string s;
		if (istrm >> n >> s)                               // text input
			std::cout << "read back from file: " << d << ' ' << n << ' ' << s
					<< '\n';
	}
}

