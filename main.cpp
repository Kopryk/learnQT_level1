#include <QCoreApplication>
#include <QString>
#include <iostream>
#include <QDebug>


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

void do_debug(){
      QTextStream textIn(stdin);
      qInfo() << "Please enter your name: ";
      QString name = textIn.readLine();
      qInfo() << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //do_cpp();
    //do_qt();
    do_debug();

    return a.exec();
}
