#include<iostream>
using namespace std;

class Year{
    public:
    enum Month{
      JANUARY = 1,
        FEBRUARY = 2,
        MARCH = 3,
        APRI= 4,
        MAY = 5,
        JUNE = 6,
        JULY = 7,
        AUGUST = 8,
        SEPTEMBER = 9,
        OCTOBER = 10,
        NOVEMBER = 11,
        DECEMBER = 12

    };

    Month currentMonth;

    void SetMonth(int month){
        if(month >= 1 && month <= 12){
            currentMonth = (Month)month;
        }
        else{
            cout << "Invalid input";
        }
    }

    string getMonthName(){
        switch (currentMonth)
        {
        case JANUARY:return "JANUARY";
        case FEBRUARY:return "FEBRUARY";
        case MARCH:return "MARCH";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";
        // case JANUARY:return "JANUARY";

        
        default: return "INVALID";
        }
    }
};
 
int main()
{  
    Year year;
    int n;
    cin >> n;

    if(n >= 1 && n <= 12){
        year.SetMonth(n);
        cout << "Month : " << year.getMonthName() << endl;
    }else{
        cout << "Invalid month";
    }


}