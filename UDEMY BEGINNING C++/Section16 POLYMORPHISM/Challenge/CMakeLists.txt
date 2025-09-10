cmake_minimum_required(VERSION 3.10)
project(AccountChallenge)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
    main.cpp
    Account.cpp
    Savings_Account.cpp
    Checking_Account.cpp
    Trust_Account.cpp
    Account_Util.cpp
    I_Printable.cpp
)

add_executable(AccountChallenge ${SOURCE_FILES})
What is that