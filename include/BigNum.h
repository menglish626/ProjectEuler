/*
Michael-Patrick English
Project Euler
BigNum.h
*/

#include	<string>
#include	<algorithm>
#include	<math.h>

using namespace std;

class BigNum
{

private:
	
	//members 
	string num;
	bool neg;

public:

	//public constructors
	BigNum(const string& n)
		{
		string tmp = n;
		//really should make sure that the rest of the string in valid
		//i.e no decimals, only numbers, except for a leading minus sign
		//Other thoughts: allow hex valued strings
		// binary seems silly
		if((unsigned char)tmp[0] == '-'){
			neg = true;
			tmp.erase(0,1);
		}else{
			neg = false;
			}
		
		reverse(tmp.begin(),tmp.end());
		//rocess string into hex
		unsigned i;
		while(i < tmp.length())
			{
				
			}
		for(unsigned i=0; i < tmp.length())
			}
			tmp[i] -= '0';
			
			}
			num = tmp;
		} 

	//public constructors
	BigNum(const string& s, bool n) : num(s), neg(n) {};
 
	//Destructor
	~BigNum(){}

	const string getStr() const
		{
		return this->num;
		}
	
	const bool getNeg() const
		{
		return this->neg;
		}

	//toString
	string toString() const
		{
		//
		}

	//arithmatic ops
	//addition define in cpp
	BigNum& operator+(const BigNum& rhs) const;

	//Sub is an alias to plus
	BigNum& operator-(const BigNum& rhs) const
		{
		BigNum* right = new BigNum(rhs.num, !rhs.neg);
		return *this + *right; 
		}//end minus
	
	//other ops 
	BigNum& operator*(const BigNum& rhs) const;
	BigNum& operator/(const BigNum& rhs) const;
	BigNum& operator%(const BigNum& rhs) const;

	//boolean ops
	//Less than
	//defined in cpp
	bool operator<(const BigNum& rhs) const;
	
	//Equal
	bool operator==(const BigNum& rhs) const
		{
		return (this->neg == rhs.neg)&&(this->num == rhs.num);
		}

	//Greater than
	bool operator>(const BigNum& rhs) const
		{
		return !((*this < rhs)||(*this == rhs));
		}

	//Less than or equal
	bool operator<=(const BigNum& rhs) const
		{
		return !(*this > rhs); 
		}

	//Greater than or equal
	bool operator>=(const BigNum& rhs) const
		{
		return !(*this < rhs);
		}

	//Not Equal
	bool operator!=(const BigNum& rhs) const
		{
		return !(*this == rhs);	
		}


private:

	//used to convert between bases;
	string changeBase(unsigned char base)();
};
