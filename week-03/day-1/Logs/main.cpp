#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> getIpAddresses(const std::string &filePath);
bool isUnique(const std::vector<std::string> &vector, const std::string &element);
void printVector(const std::vector<std::string> &vector, const std::string &vectorName);
void removeExtraWhitespaces(std::string &strToModify);
float getRequestTypeRatio(const std::string &filePath);

int main()
{
    // Read all data from 'log.txt'.
    // Each line represents a log message from a web server
    // Write a function that returns an array with the unique IP adresses.
    // Write a function that returns the GET / POST request ratio.

    std::string requestLogPath = "../log.txt";
    std::vector<std::string> uniqueIpAddresses = getIpAddresses(requestLogPath);
    printVector(uniqueIpAddresses, "uniqueIpAddresses");

    std::cout << "GET/POST ratio: " << getRequestTypeRatio("../log.txt") << "%" << std::endl;

    return 0;
}

std::vector<std::string> getIpAddresses(const std::string &filePath)
{
    std::ifstream requestLogFile(filePath);
    std::vector<std::string> uniqueIpAddresses;
    std::string line;
    std::string day;
    std::string month;
    std::string dayNum;
    std::string time;
    std::string year;
    std::string ipAddress;
    std::string httpCallType;
    std::string resourcePath;
    if (requestLogFile.is_open()) {
        while (getline(requestLogFile, line)) {
            removeExtraWhitespaces(line);        // delete unnecessary whitespaces within line

            std::istringstream stringStream(line);
            getline(stringStream, day, ' ');
            getline(stringStream, month, ' ');
            getline(stringStream, dayNum, ' ');
            getline(stringStream, time, ' ');
            getline(stringStream, year, ' ');
            getline(stringStream, ipAddress, ' ');        // get IP addr.
            getline(stringStream, httpCallType, ' ');     // get httpCallType
            getline(stringStream, resourcePath, ' ');
            if (isUnique(uniqueIpAddresses, ipAddress)) {
                uniqueIpAddresses.push_back(ipAddress);
            }
        }
    }
    requestLogFile.close();
    return uniqueIpAddresses;
}

bool isUnique(const std::vector<std::string> &vector, const std::string &element)
{
    bool isUnique = true;
    for (int i = 0; i < vector.size(); ++i) {
        if (vector[i] == element) {
            isUnique = false;
        }
    }
    return isUnique;
}

void printVector(const std::vector<std::string> &vector, const std::string &vectorName)
{
    std::cout << vectorName << ": [";
    for (int i = 0; i < vector.size(); ++i) {
        if (i != vector.size() - 1) {
            std::cout << vector[i] << ", ";
        } else {
            std::cout << vector[i];
        }
    }
    std::cout << "]" << std::endl;
}

void removeExtraWhitespaces(std::string &strToModify)
{
    while (strToModify.find("  ") != std::string::npos) {
        for (int i = 0; i < strToModify.size()-1; ++i) {
            if (strToModify[i] == ' ' && strToModify[i+1] == ' ') {
                strToModify.erase(strToModify.begin()+i);
            }
        }
    }
    // use with const &input and "return outputString"
    /*std::unique_copy (input.begin(), input.end(), std::back_insert_iterator<std::string>(outputString),
                      [](char a,char b){ return isspace(a) && isspace(b);});
    return outputString;*/
}

float getRequestTypeRatio(const std::string &filePath)
{
    std::ifstream requestLogFile(filePath);
    std::string line;
    int httpCallTypeGet = 0;
    int httpCallTypePost = 0;
    if (requestLogFile.is_open()) {
        while (getline(requestLogFile, line)) {
            if (line.find("GET") != std::string::npos) {
                httpCallTypeGet++;
            }
            if (line.find("POST") != std::string::npos) {
                httpCallTypePost++;
            }
        }
    }
    requestLogFile.close();
    return (static_cast<float>(httpCallTypeGet) / httpCallTypePost)*100;
}

