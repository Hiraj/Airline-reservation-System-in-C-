#include <iostream>

#include <cctype>

#include <string>

#include <cstring>
#include<vector>
#include <cstdlib>
#include<fstream>

//#include <iterator>


using namespace std;



//Declare function proto type

int assignSeat(int seat_num, int row_num, int pass_num);

int num1(char*);

int num2(char*);



int NumSeats = 12;



void InitializeSeats();

void Reserve();

void Cancel();

void ChangeSeat();

void Display();
void  Search();
//void delete(void);
void Binary();





struct Seat

  {

      char pass_name[80];

      int Available;

  };



  struct Seat SeatArray[6][2];



int main()

{
    cout<<"**********************************************************\n";
    cout<<"*****Welcome to Alhababe Airline reservation System****\n";
    cout<<"**********************************************************\n";


   char seatchioce = 0;

   int row_num = 6;

   char a = 0;

   char w = 0;



  int total_passenger = 12;


   vector<int> v;
 v.assign( 10, 42 );



  char arr1[][6] = {"1A","2A","3A","4A","5A","6A"};

  char arr2[][6] = {"1B","2B","3B","4B","5B","6B"};



  int MenuChoice;



  InitializeSeats();

  while(1)

  {

      cout << " 1. Reserve" << endl;

      cout << " 2. Delete Record" << endl;

      cout << " 3. Change/Edit Record" << endl;

      cout << " 4. Display available seats" << endl;

     // cout << " 5. Exit" << endl;
      cout<<  "5.Search"<<endl;



      cout << "Enter your choice: ";

      cin >> MenuChoice;



    if((MenuChoice < 0) && (MenuChoice > 5))

    {

      cout << "Invalid Choice" << endl;

//      system("Pause Try Again");

    }

    else

    {

        switch(MenuChoice)

        {

            case 1: Reserve();

                break;

            case 2: Cancel();

                break;

            case 3: ChangeSeat();

                break;

            case 4: Display();

                break;
                case 5:Search();
                break;
                case 6:Binary();
                break;

            default:

              cout<<"invalid choice";

        }

    }

    cin.get();

  }



return 0;



}

void Reserve() //This function is for reserv the seats

{
int option;
string name;


//vector<string>flights;
//flights.assign("Pakistan international Airline","Thi Airline","Saudi Airline","China Airline","Cambodia Airline","Qatar Airline","Asian Airline","Ethid Airline","Malaysian Airline","Bankok Airline","Dubai Airline","Sigrapore Airways","American Airways","Turtisk Airways");
//{
   // for (int i=0;i<flights.size;size++)
  //  {
   //     cout<<flights[i]endl;
   // }
//}



     cout << "All " << NumSeats << " seats are available " << endl;



     for(int i = 0; i < 6; i++)

     {

         for(int j = 0; j < 2; j++)

         {

             if(SeatArray[i][j].Available == 1)

             {

                 cout << "Please enter the passenger name: ";
                 cin>>name;
                 cout<<" please select your  destiney";
                 cout<<"*******************************************************\n";
                 cout<<"#######################################################\n";
                 cout<<"0....PIA        Airline     Kulalumpur    TO     Kabul\n";
                  cout<<"1....Thi        Airline     Kulalumpur   TO     Penang \n";
                  cout<<"2....British    Airline     kabul        TO     Karachi \n";
                  cout<<"3....Saudi      Airline     Dubai        TO     New Delhi\n";
                  cout<<"4....China      Airline     Dhaka        TO     Vienna \n";
                  cout<<"5....Cambodia   Airline     Phnom Penh   TO     Karachi \n";
                  cout<<"6....Qatar      Airways     Beijing      TO     Moroni\n";
                  cout<<"7....Asian      Airline     Yangon       TO     Shanghai\n";
                  cout<<"8....Etihad     Airways     Berlin       TO     Guatemala City\n";
                  cout<<"9... Malaysian  Airline     Georgetown   TO     Guatemala City\n";
                 cout<<"10....Bangkok    Airways     Paris        TO     Lahore\n";
                 cout<<"11....Dubai      Airline     London       TO     Karachi\n";
                 cout<<"12....Singapore  Airlines    London       TO     Bangkok\n";
                 cout<<"13....American   Airline     New york     TO     Toronto\n";
                 cout<<"14....Turkish    Airlines    penang       TO     New Delhi\n";
                 cout<<"15....PIA        Airline     Islammabad   TO     Jeddah\n";
                 cin>>option;
                 switch(option)
                 {
                 case 0:
                cout<<" you have reserved for Kulalumpur to Kabul\n";
                break;
              case 1:
                cout<<"you have reserved from Kulalumpur to Penang \n";
                break;

              case 2:
                cout<<" you have reserved from Kabul to Karachi\n";
                break;
              case 3:

                cout<<" you have reserved  from Dubai to New Delhi\n";
                break;
              case 4:
                cout<<" you have reserved from Dubai to New Delhi\n";
                break;
              case 5:
                cout<<" you have reserved from Dhaka to Vienna\n";
                break;
                 case 6:
                cout<<"you have reserved  Phnom Penh to  Karachi\n";
                break;
                 case 7:
                cout<<" you have reserved from Beijing  to Moroni\n";
                break;
                 case 8:
                cout<<" you have reserved Berlin to   Guatemala City";
                break;
                 case 9:
                cout<<" you have reserved Georgetown  to    Guatemala City\n\n";
                break;
                 case 10:
                cout<<" you have Paris to     Lahore\n";
                break;
                 case 11:
                cout<<" you have reserved  Paris  TO     Lahore\n";
                break;
                 case 12:
                cout<<" you have  reserved from London to     Karachi\n\n";
                break;
                 case 13:
                cout<<" you have reserved from New York  to Toronto\n";
                break;
                 case 14:
                cout<<" you have reserved from Penang  to New Delhi \n";
                break;
                 case 15:
                    cout<<" you have reserved from Islamabad  To jeddah\n";
                    break;

                 }
                 cout<<" press any key to continue(An integer)";






                 cin >> SeatArray[i][j].pass_name;

                 SeatArray[i][j].Available = 0;

                 NumSeats--;

                 return;

             }

         }



     }

}

void Cancel()// This function is for Cancel the seat

{

    char CancelPassengerName[80];
    int password;


cout<<"enter password";
cin>>password;
if(password==123)
{
   cout << "Enter the Passenger to be cancelled: ";

    cin >> CancelPassengerName;

    cout<<"The ticket of "<<CancelPassengerName<<"has been removed  "<<endl;
}



    for(int i =0; i <6; i++)
    {

        for(int j=0; j<2; j++)

        {



            if(strcmp(SeatArray[i][j].pass_name, CancelPassengerName) == 0)

            {

                NumSeats++;

                SeatArray[i][j].Available = 1;

                return;

            }

        }

    }
    if(password !=123)
    {
        cout<<"you have entered invalid  password";
    }

    cout << " Passenger not in the list" << endl;

}

void ChangeSeat()//This function is for Change the seat

{
    int airline;
        int air;
        string aaa;
    cout<<" ...press 0 to view all avaialbe airlines\n";
   cout << "...press1 to edit\n";
   cout<<"....press 3 to change passenger seat\n";


    cin>>airline;
    if(airline==0)
    {
        cout<<"following Airlines are available";
        string foo[] = {"PIA","THI Airline","Indian Airline","Cambodia Airline","China Airline","Qatar Airline","Asian Airline","Ethid Airways","Bankok Airline","Malaysian Airline","Dubai airline","Singapore Airline","American Airline","Turkish Airline"};
        for(int A=0; A<12;A++)
        {
            cout<<"..."<<foo[A] <<endl;

        }
        cout<<"\n";

    }

    if(airline==1)
    {
       std::vector<string> myvector;
  string mystring;

  std::cout << "Please  enter Airline thatyou want  to edit(enter 0 to end):\n";

 // do {
    std::cin >> mystring;
    myvector.push_back (mystring);
 // } while (mystring);// string can not be converted to bool

  std::cout << "your specified Airline  of  " << int(myvector.size()) << " Has been saved.\n";


 // return 0;
    }

if(airline==3)
{

    char MovePassenger[80];

    int SeatRow, SeatColumn;



    cout << "Enter the passenger name to be moved: ";

    cin >> MovePassenger;



    for(int i = 0; i < 6; i++)

    {    for(int j = 0; j < 2; j++)

        {

            if(strcmp(SeatArray[i][j].pass_name, MovePassenger) == 0)

            {

                SeatRow = i;

                SeatColumn = j;

            }

        }

    }




    if(NumSeats <= 0)

    {

        cout << "No seat available there for you cannot change seat" << endl;

        return;

    }


    else{

        for(int i = 0; i < 6; i++)

        {

            for(int j = 0; j < 2; j++)

            {

                if(SeatArray[i][j].Available == 1)

                {

              //  strcpy_s(SeatArray[i][j].pass_name, MovePassenger);

                    SeatArray[SeatRow][SeatColumn].Available = 1;

                    SeatArray[i][j].Available = 0;



                    return;
                }
            }
        }
    }
}




}






void Display()//Display the seat assingment for the all reservation

{

    for(int i = 0; i < 6; i++)

    {

        for(int j = 0; j < 2; j++)

        {

            if(SeatArray[i][j].Available == 0)

            {

                cout << SeatArray[i][j].pass_name << " = " << i+1;

                if (j == 0) { cout << "A" << endl; }

                else { cout << "B" << endl; }

            }

            else
            {

                if(j == 1)

                    cout << i+1 << "B" << endl;

                else

                    cout << i+1 << "A" << endl;
            }
        }
    }
}




void InitializeSeats()//Initialy all seats are available

{

    for(int i = 0; i < 12; i++)
 {

        for(int j = 0; j < 2; j++)

            SeatArray[i][j].Available = 1;

    }
}




void Search()// this function will search for Destiney

{


     //apvector <int> array(10);
     string array []= {"PIA","THI","British Airline","Saudi Airline","Emirates Airline","Malaysian Airline","Cambodia Airline","Singapore Airline"};

      cout<< "Enter  name of Airline you are searching for";
      string key;
      cin>> key;
      int flag = 0;    // set flag to off

      for(int i=0; i<10; i++)    // start to loop through the array
     {
            if (array[i] == key)   // if match is found
           {
                   flag = 1;  	// turn flag on
                   break ;    // break out of for loop
            }
      }
      if (flag)    // if flag is TRUE (1)
      {
           cout<< "Service is available\n";
      }
      else
      {
           cout<< "Sorry, Service is not available."<<endl<<endl;
      }
     //return 0;
}

void Binary()
{

    string filename = "test.txt";

   // Write to File
   ofstream fout(filename.c_str());  // default mode is ios::out | ios::trunc
   if (!fout) {
      cerr << "error: open file for output failed!" << endl;

   fout.close();


   // Read from file
   ifstream fin(filename.c_str());
   if (!fin) {
      cerr << "error: open file for input failed!" << endl;


   }
   char ch;
   while (fin.get(ch)) {  //  end-of-file
      cout << ch;
   }
   fin.close();


}
cout<<"sorry it is not working\n";
}









