#include "../HeaderFiles/IncludesHeader.h"

myInteger myIterationsCheckingFunction(myString myHelloWorldString[], myConstant myInteger myIntegerConstantForDescribingMaxArrayLength)
{
  myInteger myPointer myReturnValue = calloc(1, sizeof(myInteger));
  *myReturnValue = 0;
  for(myInteger myArrayIterator = 0; myArrayIterator < myIntegerConstantForDescribingMaxArrayLength; myArrayIterator = myArrayIterator + 1)
  {
    *myReturnValue = *myReturnValue + strlen(myHelloWorldString[myArrayIterator]);
  }
  return *myReturnValue;
}
