#include <bits/stdc++.h>
using namespace std;

struct Student {
    char name[20];
    int age;
    int scores[5];
};

int main() {
    Student student1 = {"John", 20, {80, 90, 85, 75, 95}};
    Student student2 = student1; 

    student2.scores[0] = 100; 

    cout << "Student 1: " << student1.scores[0] << endl; 
    cout << "Student 2: " << student2.scores[0] << endl; 

    //Nhận xét: Điểm số đầu tiên của cả student 1 và 2 đều giống nhau mặc dù chỉ thay đổi của s2
}
