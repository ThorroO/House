#pragma once
#ifndef PERSON_H
#define PERSON_H

class Person {
private:
    char* name;

public:
    explicit Person(const char* name = "Unknown");
    Person(const Person& other);
    ~Person();

    const char* getName() const;
    void setName(const char* newName);

    Person& operator=(const Person& other);
};

#endif