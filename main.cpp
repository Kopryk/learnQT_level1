#include <QCoreApplication>
#include <QString>
#include <iostream>


void do_cpp(){
    std::string name;
    std::getline(std::cin, name);
    std::cout <<"Your name: " << name << "\n";
}

void do_qt(){
    QTextStream textIn(stdin);
    QTextStream textOut(stdout);

    textOut << "Please enter your name: ";
    textOut.flush();
    QString name = textIn.readLine();
    textOut << name;
    textOut.flush();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //do_cpp();
    do_qt();

    return a.exec();
}
