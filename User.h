#pragma once

#include <string>
#include "Validator.h"
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

    bool setName(string name)
    {
      if (!Validator::isValidName(name))
      {
        return false;
      }
      this->name = name;
      return true;
    }

    bool setEmail(string email)
    {
      if (!Validator::isValidEmail(email))
      {
        return false;
      }
      this->email = email;
      return true;
    }

    bool setPassword(string password)
    {
      if (!Validator::isValidPassword(password))
      {
        return false;
      }
      this->password = password;
      return true;
    }
};
