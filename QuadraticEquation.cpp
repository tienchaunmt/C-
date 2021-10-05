#include <iostream> // là viết tắt của Input/Output Stream cho phép nhận và xuất từ màn hình Console
#include <iomanip>  // là viết tắt của iostream manipulator giúp dev định dạng output
#include <cmath>    // là tập hợp các hàm để thực hiện các phép toán

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << setprecision(2) << fixed;
  if (a == 0) {
    if (b == 0)
      if (c == 0) cout << "INF";
      else cout << "NO";
    else {
      if (round(-c/b) == -0) cout << (float) abs(-c/b);
      else cout << (float) -c/b;
    }
  } else {
    float delta = pow(b, 2)-4*a*c;
    if (delta < 0) cout << "NO";
    if (delta == 0) cout << static_cast<float>(-b/(2*a));
    if (delta > 0) {
      float x1 = (-b-sqrt(delta))/(2*a);
      float x2 = (-b+sqrt(delta))/(2*a);
      if (round(x1) == -0) x1 = abs(x1);
      if (round(x2) == -0) x2 = abs(x2);
      cout << x1 << " " << x2;
    }
  }
  return 0;
}