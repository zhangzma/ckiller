// ex25.cc
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <set>


using namespace std;

int main(int argc, char *argv[])
{
    vector<string> unread_list;
    set<string>    read_set;
    string book_name;
    std::cout << "Please enter names for book you'd like to read (Ctrl+Z to end.): "
              << std::endl;
    while (cin >> book_name) {
        unread_list.push_back(book_name);
    }
    cin.clear();

    bool timeOver = false;
    string answer;
    while (!timeOver) {

        std::cout << "Would you want read a book?(Yes/No) " << std::endl;
        std::cin >> answer;
        if (answer[0] == 'y' || answer[0] == 'Y') {
            int idx = rand() % unread_list.size();
            book_name = unread_list[idx];
            unread_list.erase(unread_list.begin() + idx);            
            read_set.insert(book_name);

            std::cout << "Did you read it? (Yes/No)" << std::endl;
            std::cin >> answer;
            if (answer[0] == 'n' || answer[0] == 'N') {
                read_set.erase(book_name);
                unread_list.push_back(book_name);
            }
        }

        std::cout << "Time Over? (Yes/No)" << std::endl;
        std::cin >> answer;
        if (answer[0] == 'y' || answer[0] == 'Y') {
            timeOver = true;
        }
    }

    std::cout << "Unread list: " << std::endl;
    vector<string>::iterator itUnread = unread_list.begin();
    while (itUnread != unread_list.end()) {
        std::cout << "<<" << *itUnread++ << ">>" << std::endl;
    }


    std::cout << "Read list: " << std::endl;
    set<string>::iterator itread = read_set.begin();
    while (itread != read_set.end()) {
        std::cout << "<<" << *itread++ << ">>" << std::endl;
    }
    
    
    return 0;
}

