#include "../HeaderFiles/IncludesHeader.h"

myInteger myPrintFWrapperFunctionWrapper(myString myHelloWorldString[], myInteger myIntegerConstantForDescribingArrayLength, myConstant myCharacter myNewLineCharacter)
{
  myInteger myPointer myReturnValue = calloc(1, sizeof(myInteger));
  *myReturnValue = 0;
  for(myInteger myArrayIterator = 0; myArrayIterator < myIntegerConstantForDescribingArrayLength; myArrayIterator = myArrayIterator + 1)
  {
    *myReturnValue = *myReturnValue + printf("%s", myHelloWorldString[myArrayIterator]);
  }
  printf("%c", myNewLineCharacter);
  return *myReturnValue;
}
