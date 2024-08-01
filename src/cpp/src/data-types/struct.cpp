#include <iostream>
using namespace std;

struct User {
  string name;
  string email;
  string password;
};

void create_user() {
  User u;

  u.name = "John";
  u.email = "john@example.com";
  u.password = "123456";

  cout << u.name << endl;
  cout << u.email << endl;
  cout << u.password << endl;
}
