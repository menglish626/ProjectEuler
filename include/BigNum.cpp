/*
Michael-Patrick English
Project Euler
BigNum Class
*/


#include	"BigNum.h"
#include 	<math.h>

using namespace std;

short firstArgZ(short (*op)(short,short), short arg){return op(0,arg);} 

short secArgZ(short (*op)(short,short), short arg){return op(arg,0);} 

short sub(short a, short b){return a - b;}
short add(short a, short b){return a + b;}

void doAddition(short* tmp, short* carry, bool* subZ,short base)
	{	
		
	if (*tmp < 0){
		*subZ = true;
		*tmp  += base;
		*carry = 1;
	}else{
		*subZ = false;
		*carry = *tmp / base;
		*tmp = *tmp % base;
		}
	}

//arithmatic ops
BigNum& BigNum::operator+(const BigNum& rhs) const
	{
	
	//deal with negative numbers;
	bool flipAns = this->neg;
	bool subtr = (this->neg^rhs.neg);
	
	string ans; 
	
	unsigned bnd1 = min(this->num.length(),rhs.num.length());
	unsigned bnd2 = max(this->num.length(),rhs.num.length());
	
	//function pointer to use subtraction or addition
	short (*op0)(short,short); 
	short (*op1)(short (*)(short, short), short);
	
	const BigNum* longer;
	
	//setting up the op pointer so we only need to ask this once;
	if(subtr){
		op0 = &sub;
	}else{
		op0 = &add;
		}
	
	//same deal here
	if(bnd1 == this->num.length()){
		op1 = &firstArgZ;	
		longer = &rhs;
	}else{
		op1 = &secArgZ;
		longer = &this->
		} 
	
	short carry = 0;
	bool subZ = false;
	
	//All the work gets done here.
	/*
	So, the string itself is a base string. This uses the full vaule of unsigned chars
	The arithmatic process is done and with shorts, becuase that prevents any overflow on the unsigned chars
	then mod base to get the carry and sum
	cast the adress of the sum to unsigned char* to grab the lower half
	
	*/
	for(unsigned i=0; i < bnd1 ; i++)
		{
		
		//partially genertic call, could be + or -	
		short tmp = op0((short)(this->num[i]), (short)(rhs.num[i]));
		tmp = op0(tmp,carry);
		
		//does the arithmatic
		doAddition(&tmp, &carry, &subZ, this->base);
	
		//add new value to string
		unsigned char* tmpAdr = &((unsigned char) tmp);
		ans.append(tmpAdr);
			
		}
	
	
	for(unsigned i=bnd1; i < bnd2 ; i++)
		{	
		
		//generic call, all set up from the conditionals above
		//note it uses the same op0 from above
		short tmp = op1(op0,(short)longer->num[i]);
		tmp = op0(tmp,carry);
		
		//same stuff again
		doAddition(&tmp, &carry, &subZ, this->base);
		
		unsigned char* tmpAdr = &((unsigned char) tmp);
		ans.append(tmpAdr);
			
		}
	
	//set the sign bit correctly
	if(flipAns){this->neg = true;}
	
	if(subZ){this->neg = !ans->neg;}
	else{this->neg = false;} 
	
	this->num = ans;	

	return *this;
	
	}//end +


//
BigNum& operator*(const BigNum& rhs)
	{

	BigNum* tmpAns = new BigNum("",false);
	
	string leftStr = this->num;
	string rightStr = rhs.num;

	bool subZ = (this->neg ^ rhs.neg);

	for(int i=0; i < rightStr.length())
		{
		
		tmpAns->num = "":
		
		char zero = 0;		

		//slide over a place
		for(int k=0; k<i; k++){tmpAns->num.append(&zero);}
		
		//reset the carry place
		short carry = 0;
		
		for(int j=0; j < leftStr.length())
			{
			
			//do muitliplcation!						
			int tmp = carry + ((short)leftStr[j] * (short)rightStr[i]);			

			//new values
			carry = tmp / this->base;
			tmp = tmp % this->base;
			
			unsigned char* tmpAdr = &((unsigned char*) tmp);

			tmpAnd->num,append(tmpAdr);

			}
		
		*this = *this + tmpAns; 
		}

	delete tmpAns;
	tmpAns = NULL;
		
	if(subZ){this->neg = true;}	

	return *this;	
	
	}//end *


void divMod(const BigNum& lhs, const BigNum& rhs, BigNum* quo, BigNum* rem)
	{

	

	}//end divMod


BigNum& BigNum::operator/(const BigNum& lhs, const BigNum& rhs)
	{return *(new BigNum("",false));}
BigNum& BigNum::operator%(const BigNum& lhs, const BigNum& rhs)
	{return *(new BigNum("",false));}




//boolean ops
//Less than
bool BigNum::operator<(const BigNum& rhs)const {return false;}



string BigNum::changeBase(unsigned char base0, unsigned char base1){	
		{

		string tmp;
		unsigned i = 0;		
	
		// go alone the digits building up units of the next base and writing out the digits;
		
		unsigned short carry = 0;
		unsigned len = num.length();	

		unsigned short sum = 0;
		while(istr != iend)
			{
			sum += carry*base1+num[i]*base1		
				
			
			}	
		}
