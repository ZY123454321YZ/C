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
	Box box1;        // ���� Box1������Ϊ Box
	Box box2;        // ���� Box2������Ϊ Box
	double tiji = 0.0; // ���ڴ洢���
    box1.heigth = 5.0;
    box1.length = 5;
    box1.width = 6;

    tiji = box1.heigth * box1.length * box1.width;
    cout << "tiji : " << tiji << endl;
    cout << "Content-type:text/html\r\n\r\n";
       cout << "<html>\n";
       cout << "<head>\n";
       cout << "<title>Hello World - ��һ�� CGI ����</title>\n";
       cout << "</head>\n";
       cout << "<body>\n";
       cout << "<h2>Hello World! �����ҵĵ�һ�� CGI ����</h2>\n";
       cout << "</body>\n";
       cout << "</html>\n";



}

