#pragma once

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class TableContainer{
    vector<string> columns;
    vector<string> touple_numbers;
    unordered_map<string, string> table_values;

public:
    void addElem(string column, string touple, string val);
    string getElem(string column, string touple);
    void addColumns(vector<string>& columns);
    void addToupleNumber(string touple_number);
    
    vector<string>& getColumns();
    vector<string>& getToupleNumbers();

    string to_string();
};