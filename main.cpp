#include <QCoreApplication>
#include <iostream>


void do_cpp(){
    std::string name;
    std::getline(std::cin, name);
    std::cout <<"Your name: " << name << "\n";
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do_cpp();
    //TODO  add some code here:
    return a.exec();
}
