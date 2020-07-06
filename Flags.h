#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
#include <algorithm>

class FileSetting
{
private:
	const std::string flags[13] = { "-f","-n","-d","-dd","-c","-a","-p","-pa","-ap","-s","-rs","-o" };
	bool isPalindrome(std::string name);
public:
	bool isFile(std::fstream& file, std::string fileName); // -f and file name
	int wordsCount(std::fstream& file, std::string fileName); // -n
	int digitsInFile(std::fstream& file, std::string fileName); // -d
	int numberInFile(std::fstream& file, std::string fileName); // -dd
	int characterCount(std::fstream& file, std::string fileName); // -c
	void anagram(std::fstream& file, std::string fileName, int count); // -a
	void palindrome(std::fstream& file, std::string fileName, int count); // -p
	std::string allWordsSortInFile(std::fstream& file, std::string fileName, int&); // -s
	std::string allWordsUnsortInFile(std::fstream& file, std::string fileName, int&); // -rs
	void launchFlags(std::string flagsName, int argumentsCount); // flags
	bool providitedFlags(char *tab[], int argumentsCount);
	void flagsMenu();
};