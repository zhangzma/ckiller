//
#include <iostream>
#include <string>
using namespace std;

string numberic("0123456789");
string character;


string find_all_number_v1(string dest);
string find_all_number_v2(string dest);
string find_all_character_v1(string dest);
string find_all_character_v2(string dest);


int main(int argc, char *argv[])
{
    string dest("ab2c3d7R4E6");
    for (int i = 'a'; i <= 'z'; i++) {
        character += (char)i;
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        character += (char)i;
    }

    string all_number = find_all_number_v1(dest);

    std::cout << all_number << std::endl;
    return 0;
}

/**
 * 查找目的字符串中所有的数字字符。使用find_first_of()
 * @param dest <doc>
 * @return <doc>
 */
string find_all_number_v1(string dest)
{
    string goal("");
    string::size_type pos = 0;
    while ((pos = dest.find_first_of(numberic, pos)) != string::npos) {
        goal += dest[pos];
        pos++;
    }

    return goal;
}

string find_all_number_v2(string dest)
{
    string goal("");

    
    
    return goal;
}

string find_all_character_v1(string dest)
{
    string goal("");
    string::size_type pos = 0;
    while ((pos = dest.find_first_of(character, pos)) != string::npos) {
        goal += dest[pos];
        pos++;
    }
    
    return goal;
}

string find_all_character_v2(string dest)
{
    string goal("");
    return goal;
}


