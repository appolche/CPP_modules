#include <iostream>
#include <string>
#include <fstream>

void check_and_change_strings(std::string &buffer, std::string substr1, std::string substr2) {

    long unsigned int substrStart = buffer.find(substr1);

    if (substrStart != std::string::npos) {

            int substrSize = substr1.size();
            std::string tmp = buffer.substr(0, substrStart);
            std::string tmp2 = substr2;
            std::string tmp3 = buffer.substr(substrStart + substrSize, buffer.size() - substrStart - substrSize);
            buffer = tmp + tmp2 + tmp3;            
            check_and_change_strings(buffer, substr1, substr2);
    }
}

int main(int argc, char **argv) {   

    if (argc != 4 ){

        std::cout << "Error! Usage: ./a.out <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string inputFileName = argv[1];
    std::string outputFileName = inputFileName + ".replace";
    std::ifstream fin;

    fin.open(inputFileName.c_str());
    if(!fin.is_open()){

        std::cout << "Error: couldn't open input file " << inputFileName << std::endl;
        return (1);
    }

    std::ofstream fout;
    fout.open(outputFileName.c_str());
    if (!fout.is_open()){

        std::cout << "Error: couldn't open output file " << outputFileName << std::endl;
        return (1);
    }
    std::string buffer, tmp;

    while(!fin.eof())
    {
        std::getline(fin, buffer);
        check_and_change_strings(buffer, argv[2], argv[3]);
        buffer = tmp + buffer;
        tmp = buffer + '\n';
    }
    // std::cout << buffer << std::endl;
    fout << buffer;

    fin.close();
    fout.close();
    return 0;
}