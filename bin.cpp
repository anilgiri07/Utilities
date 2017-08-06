#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>

int main()
{
  //int bin1, bin2, sum;
  std::string bin1, bin2, result;

  std::cout <<  "Enter 1st bin number:" ;
  std::getline(std::cin, bin1);
  std::cout <<  "Enter 2nd bin number:" ;
  std::getline(std::cin, bin2);

  result.clear();
  
  //Check if numbers are binary, how?

  //Assuming positive binary number
  int i=0, sum=0;
  int carry = 0;
  int maxLen = bin1.length() > bin2.length() ? bin1.length(): bin2.length();

  for (i=0; i<maxLen ;i++)
  {

    if (i < bin1.length())
      sum += bin1.at(bin1.length()-i-1)=='1'?1:0;

    if (i < bin2.length())
      sum += bin2.at(bin2.length()-i-1)=='1'?1:0;

      sum += carry; 
    
    result.append((sum%2)?"1":"0");
    carry = sum/2;
    sum = 0;

 // std::cout <<"Sum:" << result << "\n";
      
  }

  result.append((carry)?"1":"");


  std::cout <<"Sum:";
  for (i=result.length()-1; i >= 0 ; i--)
      std::cout << result.at(i) ;

  std::cout <<"\n";
	return 0;

}
