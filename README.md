# AcronymLookup
Python script to quickly find out what common IT acronyms stand for

Getting Started
-----------------------------------------------------------------------------------
- Download python if you have not already. I am currently using version 2.7.15
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
1) Navigate to the AcronymLookup directory in the terminal 
2) Type python acronyms.py and press enter
