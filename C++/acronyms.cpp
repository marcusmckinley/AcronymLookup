//
//  acronyms.cpp
//  acronym
//
//  Created by Marcus McKinley on 9/13/19.
//  Copyright © 2019 Marcus McKinley. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>

using namespace std;

class Acronym {
public:
    string acronym;
    string stands_for;
    Acronym(string acr, string sf) {
        acronym = acr;
        stands_for = sf;
    }
};

void clear() {
    for (int i = 0; i < 100 ; i++) {
        cout << endl;
    }
}
void load_array(vector<Acronym>& arr) {
    Acronym tmp = Acronym("","");
    ifstream in;
    in.open("acronyms.txt");
    string line;
    if (in.fail()) {
        cout << " Input File failed to open";
        return;
    }
    
    for (int i = 0; !in.eof(); i++) {
        std::getline(in, line);
        if (i % 2 == 0) {
            tmp.acronym = line;
        }
        else {
            tmp.stands_for = line;
        }
        if (tmp.stands_for != "") {
            arr.push_back(tmp);
            tmp = Acronym("", "");
        }
    }
    in.close();
}

string get_acronym() {
    cout << "Enter an Acronym: ";
    string acronym;
    cin >> acronym;
    clear();
    cout << "Press Enter to continue\n\n\n";
    return acronym;
}

string linear_search(string acronym, vector<Acronym>& arr) {
    if (arr.size() == 0) { return "Empty List\n"; }
    for (int i = 0; i < arr.size(); i++) {
        if (acronym == arr[i].acronym) {
            return (acronym + " stands for " + arr[i].stands_for + "\n");
        }
    }
    return "Acronym Not Found\n";
}

string binary_search(string acronym, vector<Acronym>& arr, int start, int end) {
    int mid = (start + end) / 2;
    if (arr.size() == 0) {
        return "Empty List\n";
    }
    
    if (start == end) {
        return ((arr[start].acronym != acronym) ? "Acronym not found\n" : acronym + " stands for " + arr[start].stands_for + "\n");
    }
    
    if (arr[mid].acronym == acronym) {
        return (acronym + " stands for " + arr[mid].stands_for + "\n");
    }
    
    else {
        if (acronym > arr[mid].acronym) {
            return binary_search(acronym, arr, mid + 1, end);
        }
        else {
            return binary_search(acronym, arr, start, mid - 1);
        }
    }
    
    
}

int main(int argc, const char * argv[]) {
    char y;
    vector<Acronym> all_acronyms;
    Acronym x = Acronym("Marcus", "McKinley");
    load_array(all_acronyms);
    
    while (!all_acronyms.empty()) {
        //std::cout << linear_search(get_acronym(), all_acronyms) << endl;
        std::cout << binary_search(get_acronym(), all_acronyms, 0, all_acronyms.size() - 1);
        cin.get(y);
        if(cin.get()=='\n')
            clear();
    }
    return 0;
}
