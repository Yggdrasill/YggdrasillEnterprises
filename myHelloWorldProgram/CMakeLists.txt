# define minimum cmake version

cmake_minimum_required(VERSION 2.6)

project(myHelloWorldProgram)

set(myHelloWorldProgramVersion 1)
set(CMAKE_C_FLAGS "--std=c99")

set(SRCS src/YggdrasillEnterprises/HeaderFiles/IncludesHeader.h
src/YggdrasillEnterprises/HeaderFiles/PrintFWrapperFunctionWrapperDeclaration.h
src/YggdrasillEnterprises/HeaderFiles/StrNCpyWrapperFunctionWrapperDeclaration.h
src/YggdrasillEnterprises/HeaderFiles/IterationsCheckingFunctionDeclaration.h
src/YggdrasillEnterprises/HeaderFiles/TypeDefinitionsHeader.h
src/YggdrasillEnterprises/SourceFiles/IterationsCheckingFunctionDefinition.c
src/YggdrasillEnterprises/SourceFiles/PrintFWrapperFunctionWrapperDefinition.c
src/YggdrasillEnterprises/SourceFiles/IterationsCheckingFunctionDefinition.c
src/YggdrasillEnterprises/SourceFiles/StrNCpyWrapperFunctionWrapperDefinition.c
src/YggdrasillEnterprises/SourceFiles/MainProgram.c)

add_executable(myHelloWorldProgram ${SRCS} )
