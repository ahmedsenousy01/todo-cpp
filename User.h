#pragma once

#include <string>
using namespace std;

class User
{
  private:
    int id;
    string name;
    string email;
    string password;
    static inline int idcounter = 0;

  public:
    User()
    {
      this->id = ++idcounter;
      this->name = "";
      this->email = "";
      this->password = "";
    }

    User(string name, string email, string password)
    {
      this->id = ++idcounter;
      this->name = name;
      this->email = email;
      this->password = password;
    }

    int getId()
    {
      return this->id;
    }

    string getName()
    {
      return this->name;
    }

    string getEmail()
    {
      return this->email;
    }

    string getPassword()
    {
      return this->password;
    }

    void setName(string name)
    {
      this->name = name;
    }

    void setEmail(string email)
    {
      this->email = email;
    }

    void setPassword(string password)
    {
      this->password = password;
    }
};
