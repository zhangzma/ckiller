
// ex30.cc
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_min_length(vector<string> &minVec, string tmp);
void add_max_length(vector<string> &maxVec, string tmp);


int main(int argc, char *argv[])
{
    vector<string> minVec, maxVec;
    int count(0);
    
    string line1 = "We were her pride of 10 she named us:";
    string line2 = "Benjamin, Phoenix, the Prodigal";
    string line3 = "and perspicacious pacific Suzanne";
    string sentence = line1 + ' ' + line2 + ' ' + line3;

    string sep = " :,";
    string::iterator beg = sentence.begin();
    string::size_type pos(0);

    do {
        pos = sentence.find_first_of(sep, pos);
        if (pos != string::npos) {
            int len = (sentence.begin() + pos) - beg;
            std::cout << sentence.substr(beg-sentence.begin(), len) << std::endl;
            count++;
            string tmp = sentence.substr(beg-sentence.begin(), len);
            add_min_length(minVec, tmp);
            add_max_length(maxVec, tmp);

            pos++;
            pos = sentence.find_first_not_of(sep, pos);
            beg = sentence.begin() + pos;
        }
        else {
            break;
        }
    } while (1);

    if (beg != sentence.end()) {
        count++;
        std::cout << sentence.substr(beg-sentence.begin(), sentence.end() - beg) << std::endl;
        string tmp = sentence.substr(beg-sentence.begin(), sentence.end() - beg);
        add_min_length(minVec, tmp);
        add_max_length(maxVec, tmp);
    }

    std::cout << "count = " << count << std::endl;
    std::cout << "min: " << std::endl;
    for (size_t i=0; i<minVec.size(); i++) {
        std::cout << minVec[i] << " ";
    }


    std::cout << std::endl;
    std::cout << "max: " << std::endl;
    for (size_t i=0; i<maxVec.size(); i++) {
        std::cout << maxVec[i] << " ";
    }

    
    return 0;
}

// 判断最小
void add_min_length(vector<string> &minVec, string tmp)
{
    if (minVec.size() != 0) {
        if (tmp.length() == minVec[0].length()) {
            minVec.push_back(tmp);
        }
        else if (tmp.length() < minVec[0].length()) {
            minVec.clear();
            minVec.push_back(tmp);
        }
    }
    else {
        minVec.push_back(tmp);
    }
}

void add_max_length(vector<string> &maxVec, string tmp)
{
    if (maxVec.size() != 0) {
        if (tmp.length() == maxVec[0].length()) {
            maxVec.push_back(tmp);
        }
        else if (tmp.length() > maxVec[0].length()) {
            maxVec.clear();
            maxVec.push_back(tmp);
        }
    }
    else {
        maxVec.push_back(tmp);
    }
}
