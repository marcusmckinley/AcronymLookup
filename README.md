# AcronymLookup
Python script to quickly find out what common IT acronyms stand for

Getting Started
-----------------------------------------------------------------------------------
- Download python if you have not already. I am currently using version 3.7.4
- Clone this repository: git clone https://github.com/marcusmckinley/AcronymLookup.git

File Structure: 
-----------------------------------------------------------------------------------
array.py

    - Acronym class 
      + holds two attributes: an acronym and what it stands for
    
    - all_acronyms array 
      + holds Acronym class objects

acronyms.py

    - clear function 
      + prints a new line character 100 times 
        
    - linear_search
      + takes in an acronym and an array as arguments
      + searches the array for the given acronym and returns what the acronym stands for or an error message
      
    - program loop
      + a loop that never terminates, that asks the user for an acronym and returns what it stands for

Running the Code: 
-----------------------------------------------------------------------------------
1) Navigate to the Python or C++ directory in the terminal -> AcronymLookup < Python or AcronymLookup < C++
2) If you are running the python program, type python acronyms.py and press enter
3) If you are running the C++ program, compile and then run the code by entering:
    - g++ acronyms.cpp
    - ./a.out
