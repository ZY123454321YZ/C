#include <iostream>
#include <limits>
using namespace std;
class Box
{
public:
	double length;
	int width;
	int heigth;
};

int main() {
	Box box1;        // 声明 Box1，类型为 Box
	Box box2;        // 声明 Box2，类型为 Box
	double tiji = 0.0; // 用于存储体积
    box1.heigth = 5.0;
    box1.length = 5;
    box1.width = 6;

    tiji = box1.heigth * box1.length * box1.width;
    cout << "tiji : " << tiji << endl;
    cout << "Content-type:text/html\r\n\r\n";
       cout << "<html>\n";
       cout << "<head>\n";
       cout << "<title>Hello World - 第一个 CGI 程序</title>\n";
       cout << "</head>\n";
       cout << "<body>\n";
       cout << "<h2>Hello World! 这是我的第一个 CGI 程序</h2>\n";
       cout << "</body>\n";
       cout << "</html>\n";



}

