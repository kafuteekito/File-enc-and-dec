#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void RunLengthEnc(string str, ofstream& outputFile) {
    int n = str.size();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;    
        }
        cout << str[i] << count;
        outputFile << str[i] << count;
    }
}

void RunLengthDecr(string str, ofstream& outputFile) {
    int n = str.size();
    for(int i = 0; i < n; i += 2) {
        if((char)str[i+2]>47 && (char)str[i+2]<58)
        {
            for(int j = 0; j < ((str[i + 1] - '0')*10 + str[i+2] - '0') ; j++) { 
                cout << str[i];
                outputFile << str[i];
            }
        i++;
        } else {
            for(int j = 0; j < str[i + 1] - '0'; j++) { 
                cout << str[i];
                outputFile << str[i];
            }
        }
    }
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cerr << "Failed to open the output file." << endl;
        return 1;
    }

    string line;
    int n;
    cout<<"This is Run-Length Encoding"<<endl;
    cout<<"Enter 1 if you want to encrypt it"<<endl;
    cout<<"Enter 2 if you want to decrypt it"<<endl;
    cin>>n;
    if(n==1)
    {    
        while (getline(inputFile, line)) {
            RunLengthEnc(line, outputFile);
        }
    }
    if(n==2)
    {
        while (getline(inputFile, line)) {
            RunLengthDecr(line, outputFile);
        }
    }
    inputFile.close();
    outputFile.close();

    return 0;
}