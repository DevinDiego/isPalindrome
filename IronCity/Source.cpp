#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isPalindrome1(std::string str)
{
	int i = 0;
	int j = str.length() - 1;

	while (j > i)
	{
		if (str[i++] != str[j--])
		{
			return false;
			break;
		}
	}
	return true;	
}

bool isPalindrome2(std::string str)
{
	int len = str.length();
	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		if (str[i] != str[j])
		{
			return false;
			break;
		}
	}
	return true;
}

std::string isPalindrome3(std::string str)
{	
	std::reverse(str.begin(), str.end());	
	return str;	
}

bool isPalindrome4(std::string str)
{
	std::string forward{};
	std::string reverse{};
	for (int i = 0; i < str.length(); i++)
	{
		forward += str[i];		
	}
	for (int j = str.length() - 1; j >= 0; j--)
	{
		reverse += str[j];
	}
	if (forward == reverse)
		return true;
	return false;
}

int main() {

	std::cout << std::boolalpha;

	std::string name = "racecar";
	
	std::cout << isPalindrome1(name) << "\n";
	std::cout << isPalindrome2(name) << "\n";

	if (name == isPalindrome3(name))
		std::cout << "Palindrome\n";	
	else 		
		std::cout << "Not Palindrome\n";

	std::cout << isPalindrome4("anna");

	
	

	
	
	



	std::cout << "\n\n";
	system("pause");
	return 0;
}

