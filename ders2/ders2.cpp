/* Topic: Variables, types, identifiers. 
Initialization of variables: 
We can define variable as a portion of memory to store a value. 
Each variable needs a name that identifies it and distinguishes it from 
the others.A valid identifier is a sequence of one or more letters, 
digits, or underscore characters (_). Spaces, punctuation marks, and 
symbols cannot be part of an identifier. In addition, identifiers shall 
always begin with a letter. C++ uses a number of keywords to identify 
operations and data descriptions;therefore, identifiers created by a 
programmer cannot match these keywords. The standard reserved keywords
that cannot be used for programmer created identifiers are:
bool, break, case, catch, char,...
 Very important: The C++ language is a "case sensitive" language.
 Types: The values of variables are stored somewhere in an unspecified 
 location in the computer memory as zeros and ones. Our program does not
 need to know the exact location where a variable is stored; it can 
 simply refer to it by its name. What the program needs to be aware of is
 the kind of data stored in the variable.
 They don't occupy the same amount of memory.
 Check the types: http://www.cplusplus.com/doc/tutorial/variables/
 Character types,Numerical integer types, Floating-point types,Boolean type, Void type.
 Ex of identifiers:
 and, bool, break,  char, char16_t, char32_t, class, const, do, double,
 else,false, float, for, if, inline, int, long,  namespace, noexcept, not, 
private, protected, public, signed, sizeof, static, static_assert ... gibi 
 Not: Sometimes you hear a group of four bits called a nibble. 
 The largest number you can represent with 8 bits is 11111111, 
 or 255 in decimal notation. Since 00000000 is the smallest, 
 you can represent 256=2^8 things with a byte.
 //////////////////////////////////////////////////////////
 Size	Unique representable values			 Notes
8-bit	256									= 2^8
16-bit	65536								= 2^16
16-bit	65536								= 2^16
32-bit	4294967296						= 2^32 (~4 billion)
64-bit	18446744073709551616			= 2^64 (~18 billion billion)
//////////////////////////////////////////////////////////
For example, a 16-bit unsigned integer would be able to represent 
65536 distinct values in the range 0 to 65535, while its signed counterpart
would be able to represent, on most cases, values between -32768 and 32767.
 */

// operating with variables

#include <iostream>
using namespace std;
int main()
{
	// declaring variables:
	double F, kutle, a; //F, m and a are also identifiers.
	// process:
	F = 10;
	kutle = 2;
	a = F/kutle;
	// print out the result:
	cout <<"ivme = "<< a << endl;
	//system("pause");
	//terminate the program:
   return 0;
}




