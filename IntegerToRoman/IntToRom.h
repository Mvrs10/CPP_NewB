#pragma once
#include <string>

static std::string intToRoman(int num) {
	std::string roman = "";

	while (num >= 1000) {
		num -= 1000;
		roman += "M";
	}
	if (num >= 900) {
		num -= 900;
		roman += "CM";
	}
	if (num >= 500) {
		num -= 500;
		roman += "D";
	}
	if (num >= 400) {
		num -= 400;
		roman += "CD";
	}

	while (num >= 100) {
		num -= 100;
		roman += "C";
	}
	if (num >= 90) {
		num -= 90;
		roman += "XC";
	}
	if (num >= 50) {
		num -= 50;
		roman += "L";
	}
	if (num >= 40) {
		num -= 40;
		roman += "XL";
	}

	while (num >= 10) {
		num -= 10;
		roman += "X";
	}
	if (num >= 9) {
		num -= 9;
		roman += "IX";
	}
	if (num >= 5) {
		num -= 5;
		roman += "V";
	}
	if (num >= 4) {
		num -= 4;
		roman += "IV";
	}

	while (num > 0) {
		num -= 1;
		roman += "I";
	}

	return roman;
}

static std::string intToRoman_v2(int num) {
	std::string ones[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };
	std::string tens[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
	std::string hrns[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
	std::string ths[] = { "","M","MM","MMM" };

	return ths[num / 1000] + hrns[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];
}