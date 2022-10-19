#include <bits/stdc++.h>

using namespace std;

int main() {
  float nilaiA, nilaiB;
  char operators;

  cout << "masukan nilai a : ";
  cin >> nilaiA;
  cout << "masukan nilai b : ";
  cin >> nilaiB; 
  cout << "pilih operator, (contoh = +, -, /, *, %) : ";
  cin >> operators;
  if (operators == '+') {
    cout << "pertambahan" << endl;
    cout << "a + b = "<< nilaiA + nilaiB << endl;
  }
  else if (operators == '-') {
    cout << "perkurangan" << endl;
    cout << "a - b = "<< nilaiA - nilaiB << endl;
  }
  else if (operators == '/') {
    cout << "pembagian" << endl;
    cout << "a / b = "<< nilaiA / nilaiB << endl;
  }
  else if (operators == '*') {
    cout << "perkalian" << endl;
    cout << "a * b = "<< nilaiA * nilaiB << endl;
  }
  else if (operators == '%') {
    cout << "sisa bagi (modulus)" << endl;
    cout << "a % b = "<< (int(nilaiA) % int(nilaiB)) << endl;
  }
  else {
    cout << "operator todak tersedia";
  }
  
  cin.get();
  return 0;
}
