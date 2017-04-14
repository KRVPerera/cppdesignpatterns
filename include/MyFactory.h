//
// Created by krv on 4/14/17.
//

#ifndef CPPDESIGNPATTERNS_MYFACTORY_H
#define CPPDESIGNPATTERNS_MYFACTORY_H

#include <iostream>
#include <cstring>
#include <vector>

class Document {
public:
    Document(std::string fn);

    // by the framework
    virtual void Open() = 0;

    virtual void Close() = 0;

    std::string getName();

private:
    std::string name;
};

class MyTestDocument : public Document {
public:
    MyTestDocument(std::string name) : Document(name) {}
    void Open() override;
    void Close() override;
};

// frame work example
class Application {
public:
    Application();

    void NewDocument(std::string name);

    virtual void ReportDocs();

    virtual Document * CreateDocument(std::string name) = 0;

private:
    std::vector<Document*> docs;
};

class MyFactory : public Application {

public:
    MyFactory();

    Document * CreateDocument(std::string name){
        std::cout << "My implemented custom doc creation" << std::endl;
        return new MyTestDocument(name);
    }

};

#endif //CPPDESIGNPATTERNS_MYFACTORY_H
