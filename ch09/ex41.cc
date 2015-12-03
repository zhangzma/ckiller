// copyright (c) 2015 www.eva-tec.com
// ex41.cc

#include <iostream>
#include <string>

using std::string;

string greet(string form, string lastname, string title,
             string::size_type pos, int length);

int main(int argc, char *argv[])
{
    std::string generic1("Dear Ms Daisy:");
    std::string generic2("MrsMsMissPeople");

    string lastName("AnnaP");
    string salute = greet(generic1, lastName, generic2, 5, 4);

    std::cout << salute << std::endl;
	
    return 0;
}

string greet(string form, string lastname, string title,
             string::size_type pos, int length)
{
    string ln("Daisy");
    string::size_type npos = form.find(ln, 0);
    form.replace(npos, ln.length(), lastname);

    string type("Ms");
    npos = form.find(type);
    form.replace(npos, type.length(), title, pos, length);
    
    return form;
}
