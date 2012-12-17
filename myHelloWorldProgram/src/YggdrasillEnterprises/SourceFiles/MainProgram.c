#include "../HeaderFiles/IncludesHeader.h"

myInteger main(void)
{
  myConstant myInteger myIntegerConstantForDescribingMaxArrayLength = 5;                                                                // Max lenght of the array of strings, it is used in myHelloWorldString
  myConstant myInteger myIntegerConstantForDescribingMaxStringLength = 10;                                                              // Max lenght of the string contained in the array of strings, it is used in myHelloWorldString
  myConstant myCharacter myNewLineCharacter = '\n';                                                                                      // This defines the newline character
  myString myHelloWorldString[myIntegerConstantForDescribingMaxArrayLength];                                                    // This is a string declaration, it will contain the following strings:
  myString myHelloString = "Hello";                                                                                             // Hello string, it contains the string "Hello"
  myString myCommaString = ",";                                                                                                 // Comma string, it contains the string ","
  myString mySpaceString = " ";                                                                                                 // Space string, it contains the string " "
  myString myWorldString = "World";                                                                                             // World string, it contains the string "World"
  myString myExclamationString = "!";                                                                                           // Exclamation mark string, it contains the string "!"

  myInteger myIntegerForCheckingIterations;
  myIntegerForCheckingIterations = myStrNCpyWrapperFunctionWrapper(myHelloWorldString, myHelloString, myCommaString, mySpaceString, myWorldString, myExclamationString, myIntegerConstantForDescribingMaxStringLength);  // Calls the safe StrNCpy wrapper
  if(myIntegerForCheckingIterations == 4)
  {
    myIntegerForCheckingIterations = myPrintFWrapperFunctionWrapper(myHelloWorldString, myIntegerConstantForDescribingMaxArrayLength, myNewLineCharacter); // Calls the safe PrintF wrapper
    if(myIntegerForCheckingIterations == myIterationsCheckingFunction(myHelloWorldString, myIntegerConstantForDescribingMaxArrayLength) )
    {
      printf("All operations are correct. Quitting%c", myNewLineCharacter);
      return 0;
    }
    else
    {
      printf("Iterations are %d, quitting due to error%c", myIntegerForCheckingIterations, myNewLineCharacter);
      return 0;
    }
    return 0;
  }
  else
  {
    printf("Iterations are %d, quitting due to error%c", myIntegerForCheckingIterations, myNewLineCharacter);
    return 0;
  }
  return 0; // Returns 0
}
