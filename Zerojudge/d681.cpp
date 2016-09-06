#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int ToBin(string s) {
    int tmp = 0;
    for(int i = 0; i < s.size(); ++i)
        tmp = tmp * 2 + s[i] - '0';
    return tmp;
}

string ToStr(int n) {
    string tmp = "00000";
    int i = 4;
    while(n > 0) {
        tmp[i--] = ('0' + n % 2);
        n /= 2;
    }
    return tmp;
}

int main()
{
  ios_base::sync_with_stdio(0);
  string s1, s2, s3;
  int n1, n2;
  while(getline(cin, s1) != EOF) {
      stringstream ss(s1);
      ss >> s1;
      cout << s1;
      n1 = ToBin(s1);
      while(ss >> s2 >> s3) {
          n2 = ToBin(s3);
          if(s2 == "and") {
              cout << "&&";
              n1 = n1 & n2;
          }
          else {
              cout << "||";
              n1 = n1 | n2;
          }
          cout << s3;
      }
      cout << " = " << ToStr(n1) << endl;
  }
  return 0;
}
