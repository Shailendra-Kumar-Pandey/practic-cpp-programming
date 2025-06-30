/* Write a Program to Class and Overloading function in Simple Interest.
To calculate and print simple interest. Consider overloaded function with a name
simple_interest(int p, int t, int r), simple_interest(int p, int t).
*/
#include<iostream>
using namespace std;
<<<<<<< HEAD
class SimpleInterest
{
    //int rate;
    public:
        int Simple_Interest(int p, int t, int r){
            return (p*t*r)/100;
        }
       // void setRate(int r){
       //     rate = r;
       // }
        int Simple_Interest(int p, int t){
            return (p*t)/100;
        }
=======
class SimpleInterest {
public:
    // Function to calculate simple interest with rate
    float simple_interest(int p, int t, int r) {
        return (p * t * r) / 100.0;
    }
    // Overloaded function to calculate simple interest without rate
    float simple_interest(int p, int t) {
        float default_rate = 5.0; // Default rate of interest
        return (p * t * default_rate) / 100.0;
    }
>>>>>>> 96d3b59e8cbf52df852a07f953be1ce033e8fdaf
};
int main(){
    SimpleInterest si;
<<<<<<< HEAD
   // si.setRate(5);
    si.Simple_Interest(5000,12,7);
    si.Simple_Interest(10000,5);
=======
    int principal, time, rate;

    // Input for simple interest with rate
    cout << "Enter Principal, Time and Rate: ";
    cin >> principal >> time >> rate;
    float interest_with_rate = si.simple_interest(principal, time, rate);
    cout << "Simple Interest with rate: " << interest_with_rate << endl;

    // Input for simple interest without rate
    cout << "Enter Principal and Time: ";
    cin >> principal >> time;
    float interest_without_rate = si.simple_interest(principal, time);
    cout << "Simple Interest without rate: " << interest_without_rate << endl;

>>>>>>> 96d3b59e8cbf52df852a07f953be1ce033e8fdaf
    return 0;
}
