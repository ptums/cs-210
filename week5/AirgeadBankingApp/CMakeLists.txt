cmake_minimum_required(VERSION 3.22)
project(AirgeadBankingApp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(AirgeadBankingApp
        AnnualBalance.cpp
        CurrentInvestment.cpp
        CurrentInvestment.h
        main.cpp
        PrintContinueMessage.cpp
        PrintHeaderMessage.cpp CharToString.cpp PrintHeaderMessage.h PrintContinueMessage.h CharToString.h AnnualBalance.h)
