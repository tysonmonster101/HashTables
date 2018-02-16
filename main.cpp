#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    ///Users/75631/Desktop/NamesAndNumbers.csv
    std::vector<std::string> theFileData;
    std::string theLine;
    std::string filePath;
    std::cout << "what is the file path of the file you would like to read in?" << std::endl;
    std::cin >> filePath;
    std::ifstream thisStream;
    thisStream.open(filePath);
    while(getline(thisStream,theLine))
    {
        theFileData.push_back(theLine);
    }
    while(theFileData.empty() == false)
    {
        std::cout << theFileData.back() << std::endl;
        theFileData.pop_back();
    }
    std::cout << (int)('z') << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}