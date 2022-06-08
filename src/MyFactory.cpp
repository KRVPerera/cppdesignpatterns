//
// Created by krv on 4/14/17.
//

#include "MyFactory.h"

Document::Document(std::string fn) {
    name = fn;
}

Document::~Document() {}

std::string Document::getName() {
    return name;
}

void MyTestDocument::Open()  {
    std::cout << "MytestDocument : Open()" << std::endl;
}

void MyTestDocument::Close()  {
    std::cout << "MytestDocument : Close()" << std::endl;
}

Application::Application() {
    std::cout << "Framework app ctor" << std::endl;
}

Application::~Application() {}

void Application::NewDocument(std::string name) {
    std::cout << "MyFactory::NewDocument(" << name << ")" << std::endl;
    Document * doc = CreateDocument(name);
    doc->Open();
    docs.push_back(doc);
}

void Application::ReportDocs() {
    std::cout << "Application: ReportDocs()" << std::endl;
    for (unsigned long i = 0; i < docs.size(); ++i) {
        std::cout << "   " << docs[i]->getName() << std::endl;
    }
}

MyFactory::MyFactory(){
    std::cout << std::endl << "******** My Factory started ********" << std::endl;
}

MyFactory::~MyFactory() {}