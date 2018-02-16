//
// Created by 75631 on 2/8/18.
//

#ifndef HASHTABLES_HASHTABLE_H
#define HASHTABLES_HASHTABLE_H
#include <iostream>
#include <vector>

class HashTable
{
public:
    void insertData(std::string theData);
    void insertData(std::vector<std::string> theData);
    std::string findNumber(std::string nameOfCompany);
private:
    //this is like a memory to cpu ratio. <ascii table value>/compact value returns the actual position
    const int compactValue = 5;
    int getHashValue(std::string companyName);
};


#endif //HASHTABLES_HASHTABLE_H
