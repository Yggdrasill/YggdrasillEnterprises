#include "../HeaderFiles/IncludesHeader.h"

myInteger myStrNCpyWrapperFunctionWrapper(myString myHelloWorldString[], myString myHelloString, myString myCommaString, myString mySpaceString, myString myWorldString, myString myExclamationString, myConstant myInteger myIntegerConstantForDescribingMaxStringLength)
{
  myInteger myArrayIterator = 0;
  myHelloWorldString[myArrayIterator] = myHelloString;
  myArrayIterator = myArrayIterator + 1;
  myHelloWorldString[myArrayIterator] = myCommaString;
  myArrayIterator = myArrayIterator + 1;
  myHelloWorldString[myArrayIterator] = mySpaceString;
  myArrayIterator = myArrayIterator + 1;
  myHelloWorldString[myArrayIterator] = myWorldString;
  myArrayIterator = myArrayIterator + 1;
  myHelloWorldString[myArrayIterator] = myExclamationString;
  return myArrayIterator;
}
