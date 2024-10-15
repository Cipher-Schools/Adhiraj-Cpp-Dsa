#include <iostream>
using namespace std;

void useHealth(int currentHP, int amount) {

  if (amount > currentHP) {
    throw runtime_error("Not enough health points");
  }

  cout << currentHP;
}

void useMagic(int power, int amount) {
  if (amount > power) {
    throw logic_error("Hello");
  }
}

int main() {
  try {
    useHealth(30, 50);
    useMagic(30, 50);
  } catch (runtime_error e) {
    cout << "Health error ";
  }

  catch (logic_error e) {
    cout << "Magic error";
  }
}
