#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct Point {
	double x, y;
};

void input(Point &P) {
	cin >> P.x >> P.y;
}

double distance(Point A, Point B) {
	return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
