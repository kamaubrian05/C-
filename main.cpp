#include <iostream>//Pre-processor directive

using namespace std;

int sumo(int a,int b);
void giveName();
int main()
{
    cout << "Hello world\nBrian Kamau\n!" << endl;
    for(int i=0;i<6;i++){
        cout << "God Bless You" << endl;
    }

    int x,y;
    x=10;
    y=11;

    int sum = x+y;

    cout << "The sum is:\n" <<sum<<endl;
    int number;
    cout<< "Please Enter First Number\n";
    cin>>number;
    giveName();
    cout << "Sum of the Two is : "<<sumo(x, y)<<endl;


}
void giveName()
{
    cout << "Hhaha"<<endl;
}
int sumo(int a,int b)
{
    return(a+b);

}
