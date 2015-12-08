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
	unsigned char base;
public:

	//public constructors
	BigNum(const string& strg, char baseIn, char baseOut)
		{
		string tmp = strg;
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
		//rocess string
		if(baseIn == baseOut){
			for(unsigned i=0; i < tmp.length())
				}
				tmp[i] -= '0';
			
				}
				num = tmp;
			} 
		}else{

			//use change of base function	
			this->num = tmp;
			this->changeBase(baseIn, baseOut);
			}
		
		return this;
		}

	//public constructors
	BigNum(const string& s, bool n, unsigned char bass) : num(s), neg(n), base(bass) {};
 
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
		string result = ""
		string delim = " "		

		for(unsigned i=0; i<this->num.length(); i++)
			{
			char* tmp = char[4];
			char[0] = this->num[i] / 100;
			char[1] = (this->num[i] % 100) / 10; 
			char[2] = (this->num[i] % 100) % 10;
			
			if((char[0] == 0)
				{
				char[0] = char[1];
				char[1] = char[2];
				char[2] = 0; 
				}

			//diliberately here twice	
			if((char[0] == 0)
				{
				char[0] = char[1];
				char[1] = char[2];
				char[2] = 0; 
				}

			result.append(tmp);
			result.append(&delim);	

			}

		reverse(result.beign(),reults.end());

		return result;
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
	string changeBase(unsigned char baseIn, unsigned char baseOut)();
};
