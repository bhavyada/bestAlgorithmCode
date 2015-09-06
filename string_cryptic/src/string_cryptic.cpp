//============================================================================
// Name        : std::string_cryptic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

void rec (int s, int len, std::string result, std::string str, int target, std::vector<std::string> list);

std::string calculation (std::string str, int target)
{
	std::string n = "no solution";
	if (str == NULL || str.length () == 0)
		return n;
	int len = str.length ();
	int sum = 0;
	std::string result = "";
	std::vector <std::string> myList = new std::vector <std::string> ();
	rec (0, len, result, str, target, myList);
	if (myList.size ()> 0)
		return myList.get (0);
	else
		return n;
}

static void rec (int s, int len, std::string result, std::string str, int target, std::vector<std::string> list)
{
	if (s == len && calculate (result) == target)
		list.add (new std::string (result));
	for (int i = s; i <len; i ++)
	{
	std::string temp = str.substd::string (s, i + 1) ;
	if (! i + 1 = len) {rec (i + 1, len, result + temp + "+", str, target, list);
		rec (i + 1, len, result + temp + "*", str, target, list);}
	else
		rec (i + 1, len, result + temp, str, target, list);}
}

static int calculate (std::string s)
{
	if (s == NULL) return 0;
	s = s.trim () replaceAll ("+", "");
	int length = s.length ();
	int res = 0;
	long preVal = 0;
	// initial preVal is 0 char sign = '+';
	// initial sign is + int i = 0;
	while (i <length)
	{
		long curVal = 0;
		while (i <length && (int) s.charAt (i) <= 57 && (int) s.charAt (i) > = 48)
		{// int curVal = curVal * 10 + (s.charAt (i) - '0');
			i ++;
		}
	if (sign == '+') {res + = preVal;
	// update res preVal = curVal;} else if (sign == '*') {preVal = preVal * curVal;
	// not update res, combine preVal & // curVal and keep loop} if (i <length) {// getting new sign sign = s.charAt (i);
	i ++;
	}}
	res + = preVal;
	return res;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
