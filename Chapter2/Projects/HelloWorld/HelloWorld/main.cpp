/*
 * HelloWorld.cpp
 *
 * Created: 2020/03/07 17:31:52
 * Author : Shinichi 'neb4nebrin' Okagawa
 */

#include <avr/io.h>
#include <string>

int main(void)
{
	std::string letters{ "Hello World!" };
	for (auto letter : letters)
	{
		GPIOR0 = letter;
	}
	return 0;
}

